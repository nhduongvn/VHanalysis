#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2016_QuadJet_TripleTag_16_tagged_logY()
{
//=========Macro generated from canvas: pt_jet1_2016_QuadJet_TripleTag_16_tagged/pt_jet1_2016_QuadJet_TripleTag_16_tagged
//=========  (Thu Apr 27 10:19:45 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2016_QuadJet_TripleTag_16_tagged = new TCanvas("pt_jet1_2016_QuadJet_TripleTag_16_tagged", "pt_jet1_2016_QuadJet_TripleTag_16_tagged",0,0,600,600);
   pt_jet1_2016_QuadJet_TripleTag_16_tagged->SetHighLightColor(2);
   pt_jet1_2016_QuadJet_TripleTag_16_tagged->Range(-100,-0.6125791,566.6667,2.502912);
   pt_jet1_2016_QuadJet_TripleTag_16_tagged->SetFillColor(0);
   pt_jet1_2016_QuadJet_TripleTag_16_tagged->SetBorderMode(0);
   pt_jet1_2016_QuadJet_TripleTag_16_tagged->SetBorderSize(2);
   pt_jet1_2016_QuadJet_TripleTag_16_tagged->SetLogy();
   pt_jet1_2016_QuadJet_TripleTag_16_tagged->SetLeftMargin(0.15);
   pt_jet1_2016_QuadJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   pt_jet1_2016_QuadJet_TripleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet1__122 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet1__122","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet1__122->SetBinContent(6,9);
   _QuadJet_TripleTag_tagged_pt_jet1__122->SetBinContent(7,29);
   _QuadJet_TripleTag_tagged_pt_jet1__122->SetBinContent(8,46);
   _QuadJet_TripleTag_tagged_pt_jet1__122->SetBinContent(9,82);
   _QuadJet_TripleTag_tagged_pt_jet1__122->SetBinContent(10,66);
   _QuadJet_TripleTag_tagged_pt_jet1__122->SetBinContent(11,64);
   _QuadJet_TripleTag_tagged_pt_jet1__122->SetBinContent(12,68);
   _QuadJet_TripleTag_tagged_pt_jet1__122->SetBinContent(13,61);
   _QuadJet_TripleTag_tagged_pt_jet1__122->SetBinContent(14,45);
   _QuadJet_TripleTag_tagged_pt_jet1__122->SetBinContent(15,40);
   _QuadJet_TripleTag_tagged_pt_jet1__122->SetBinContent(16,39);
   _QuadJet_TripleTag_tagged_pt_jet1__122->SetBinContent(17,23);
   _QuadJet_TripleTag_tagged_pt_jet1__122->SetBinContent(18,23);
   _QuadJet_TripleTag_tagged_pt_jet1__122->SetBinContent(19,19);
   _QuadJet_TripleTag_tagged_pt_jet1__122->SetBinContent(20,28);
   _QuadJet_TripleTag_tagged_pt_jet1__122->SetBinContent(21,24);
   _QuadJet_TripleTag_tagged_pt_jet1__122->SetBinContent(22,20);
   _QuadJet_TripleTag_tagged_pt_jet1__122->SetBinContent(23,13);
   _QuadJet_TripleTag_tagged_pt_jet1__122->SetBinContent(24,8);
   _QuadJet_TripleTag_tagged_pt_jet1__122->SetBinContent(25,9);
   _QuadJet_TripleTag_tagged_pt_jet1__122->SetBinContent(26,8);
   _QuadJet_TripleTag_tagged_pt_jet1__122->SetBinContent(27,6);
   _QuadJet_TripleTag_tagged_pt_jet1__122->SetBinContent(28,5);
   _QuadJet_TripleTag_tagged_pt_jet1__122->SetBinContent(29,6);
   _QuadJet_TripleTag_tagged_pt_jet1__122->SetBinContent(30,6);
   _QuadJet_TripleTag_tagged_pt_jet1__122->SetBinContent(31,3);
   _QuadJet_TripleTag_tagged_pt_jet1__122->SetBinContent(32,3);
   _QuadJet_TripleTag_tagged_pt_jet1__122->SetBinContent(33,1);
   _QuadJet_TripleTag_tagged_pt_jet1__122->SetBinContent(34,2);
   _QuadJet_TripleTag_tagged_pt_jet1__122->SetBinContent(35,2);
   _QuadJet_TripleTag_tagged_pt_jet1__122->SetBinContent(36,1);
   _QuadJet_TripleTag_tagged_pt_jet1__122->SetBinContent(37,1);
   _QuadJet_TripleTag_tagged_pt_jet1__122->SetBinContent(38,2);
   _QuadJet_TripleTag_tagged_pt_jet1__122->SetBinContent(41,1);
   _QuadJet_TripleTag_tagged_pt_jet1__122->SetBinContent(42,1);
   _QuadJet_TripleTag_tagged_pt_jet1__122->SetBinContent(43,4);
   _QuadJet_TripleTag_tagged_pt_jet1__122->SetBinContent(45,2);
   _QuadJet_TripleTag_tagged_pt_jet1__122->SetBinContent(51,2);
   _QuadJet_TripleTag_tagged_pt_jet1__122->SetEntries(772);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_tagged_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 772    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  141.6");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  66.32");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_pt_jet1__122->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_pt_jet1__122);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_pt_jet1__122->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_pt_jet1__122->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_TripleTag_tagged_pt_jet1__122->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_tagged_pt_jet1__122->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet1__122->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet1__122->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet1__122->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_pt_jet1__122->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet1__122->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet1__122->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet1__122->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet1__122->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet1__122->Draw("HIST");
   pt_jet1_2016_QuadJet_TripleTag_16_tagged->Modified();
   pt_jet1_2016_QuadJet_TripleTag_16_tagged->cd();
   pt_jet1_2016_QuadJet_TripleTag_16_tagged->SetSelected(pt_jet1_2016_QuadJet_TripleTag_16_tagged);
}
