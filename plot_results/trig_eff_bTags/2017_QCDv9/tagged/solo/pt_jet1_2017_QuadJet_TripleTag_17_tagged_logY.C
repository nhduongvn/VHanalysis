#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2017_QuadJet_TripleTag_17_tagged_logY()
{
//=========Macro generated from canvas: pt_jet1_2017_QuadJet_TripleTag_17_tagged/pt_jet1_2017_QuadJet_TripleTag_17_tagged
//=========  (Thu Apr 27 10:19:53 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2017_QuadJet_TripleTag_17_tagged = new TCanvas("pt_jet1_2017_QuadJet_TripleTag_17_tagged", "pt_jet1_2017_QuadJet_TripleTag_17_tagged",0,0,600,600);
   pt_jet1_2017_QuadJet_TripleTag_17_tagged->SetHighLightColor(2);
   pt_jet1_2017_QuadJet_TripleTag_17_tagged->Range(-100,-0.6070063,566.6667,2.452757);
   pt_jet1_2017_QuadJet_TripleTag_17_tagged->SetFillColor(0);
   pt_jet1_2017_QuadJet_TripleTag_17_tagged->SetBorderMode(0);
   pt_jet1_2017_QuadJet_TripleTag_17_tagged->SetBorderSize(2);
   pt_jet1_2017_QuadJet_TripleTag_17_tagged->SetLogy();
   pt_jet1_2017_QuadJet_TripleTag_17_tagged->SetLeftMargin(0.15);
   pt_jet1_2017_QuadJet_TripleTag_17_tagged->SetFrameBorderMode(0);
   pt_jet1_2017_QuadJet_TripleTag_17_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet1__62 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet1__62","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(6,4);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(7,18);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(8,35);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(9,58);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(10,67);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(11,72);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(12,66);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(13,74);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(14,43);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(15,37);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(16,38);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(17,26);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(18,29);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(19,8);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(20,17);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(21,16);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(22,14);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(23,5);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(24,8);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(25,8);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(26,7);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(27,4);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(28,5);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(29,2);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(30,4);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(31,3);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(32,3);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(33,2);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(34,3);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(35,2);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(38,1);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(40,3);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(43,2);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(46,1);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(47,1);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(49,2);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(51,3);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetEntries(691);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_tagged_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 691    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  140.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  64.56");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_pt_jet1__62->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_pt_jet1__62);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_pt_jet1__62->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_tagged_pt_jet1__62->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_tagged_pt_jet1__62->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet1__62->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet1__62->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet1__62->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_pt_jet1__62->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet1__62->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet1__62->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet1__62->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet1__62->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet1__62->Draw("HIST");
   pt_jet1_2017_QuadJet_TripleTag_17_tagged->Modified();
   pt_jet1_2017_QuadJet_TripleTag_17_tagged->cd();
   pt_jet1_2017_QuadJet_TripleTag_17_tagged->SetSelected(pt_jet1_2017_QuadJet_TripleTag_17_tagged);
}
