#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2018_QuadJet_TripleTag_18_tagged_logY()
{
//=========Macro generated from canvas: pt_jet1_2018_QuadJet_TripleTag_18_tagged/pt_jet1_2018_QuadJet_TripleTag_18_tagged
//=========  (Thu Apr 27 10:20:01 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2018_QuadJet_TripleTag_18_tagged = new TCanvas("pt_jet1_2018_QuadJet_TripleTag_18_tagged", "pt_jet1_2018_QuadJet_TripleTag_18_tagged",0,0,600,600);
   pt_jet1_2018_QuadJet_TripleTag_18_tagged->SetHighLightColor(2);
   pt_jet1_2018_QuadJet_TripleTag_18_tagged->Range(-100,-0.6446351,566.6667,2.791416);
   pt_jet1_2018_QuadJet_TripleTag_18_tagged->SetFillColor(0);
   pt_jet1_2018_QuadJet_TripleTag_18_tagged->SetBorderMode(0);
   pt_jet1_2018_QuadJet_TripleTag_18_tagged->SetBorderSize(2);
   pt_jet1_2018_QuadJet_TripleTag_18_tagged->SetLogy();
   pt_jet1_2018_QuadJet_TripleTag_18_tagged->SetLeftMargin(0.15);
   pt_jet1_2018_QuadJet_TripleTag_18_tagged->SetFrameBorderMode(0);
   pt_jet1_2018_QuadJet_TripleTag_18_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet1__62 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet1__62","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(6,2);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(7,17);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(8,45);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(9,100);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(10,117);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(11,148);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(12,128);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(13,113);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(14,105);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(15,73);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(16,71);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(17,64);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(18,54);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(19,53);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(20,38);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(21,27);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(22,22);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(23,27);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(24,17);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(25,16);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(26,11);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(27,7);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(28,12);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(29,9);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(30,7);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(31,11);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(32,5);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(33,5);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(34,5);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(35,2);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(36,7);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(37,3);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(38,2);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(39,1);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(41,1);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(42,1);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(45,2);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(47,4);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(48,2);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(50,1);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetBinContent(51,2);
   _QuadJet_TripleTag_tagged_pt_jet1__62->SetEntries(1337);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_tagged_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1337   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  147.7");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  64.82");
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
   pt_jet1_2018_QuadJet_TripleTag_18_tagged->Modified();
   pt_jet1_2018_QuadJet_TripleTag_18_tagged->cd();
   pt_jet1_2018_QuadJet_TripleTag_18_tagged->SetSelected(pt_jet1_2018_QuadJet_TripleTag_18_tagged);
}
