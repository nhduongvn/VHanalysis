#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2018_QuadJet_noTag_18_tagged_ref_logY()
{
//=========Macro generated from canvas: pt_jet2_2018_QuadJet_noTag_18_tagged_ref/pt_jet2_2018_QuadJet_noTag_18_tagged_ref
//=========  (Thu Apr 27 10:20:01 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2018_QuadJet_noTag_18_tagged_ref = new TCanvas("pt_jet2_2018_QuadJet_noTag_18_tagged_ref", "pt_jet2_2018_QuadJet_noTag_18_tagged_ref",0,0,600,600);
   pt_jet2_2018_QuadJet_noTag_18_tagged_ref->SetHighLightColor(2);
   pt_jet2_2018_QuadJet_noTag_18_tagged_ref->Range(-100,-0.6861558,566.6667,3.165102);
   pt_jet2_2018_QuadJet_noTag_18_tagged_ref->SetFillColor(0);
   pt_jet2_2018_QuadJet_noTag_18_tagged_ref->SetBorderMode(0);
   pt_jet2_2018_QuadJet_noTag_18_tagged_ref->SetBorderSize(2);
   pt_jet2_2018_QuadJet_noTag_18_tagged_ref->SetLogy();
   pt_jet2_2018_QuadJet_noTag_18_tagged_ref->SetLeftMargin(0.15);
   pt_jet2_2018_QuadJet_noTag_18_tagged_ref->SetFrameBorderMode(0);
   pt_jet2_2018_QuadJet_noTag_18_tagged_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_pt_jet2_ref__72 = new TH1D("_QuadJet_noTag_tagged_pt_jet2_ref__72","",50,0,500);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->SetBinContent(5,33);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->SetBinContent(6,249);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->SetBinContent(7,316);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->SetBinContent(8,318);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->SetBinContent(9,293);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->SetBinContent(10,222);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->SetBinContent(11,156);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->SetBinContent(12,115);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->SetBinContent(13,115);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->SetBinContent(14,59);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->SetBinContent(15,56);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->SetBinContent(16,50);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->SetBinContent(17,28);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->SetBinContent(18,26);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->SetBinContent(19,28);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->SetBinContent(20,9);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->SetBinContent(21,11);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->SetBinContent(22,10);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->SetBinContent(23,9);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->SetBinContent(24,5);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->SetBinContent(25,4);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->SetBinContent(26,3);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->SetBinContent(27,1);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->SetBinContent(28,8);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->SetBinContent(29,1);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->SetBinContent(31,1);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->SetBinContent(32,2);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->SetBinContent(33,1);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->SetBinContent(34,1);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->SetBinContent(35,1);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->SetBinContent(37,1);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->SetEntries(2132);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_tagged_pt_jet2_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2132   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  95.51");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  40.55");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_pt_jet2_ref__72->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_pt_jet2_ref__72);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_tagged_pt_jet2_ref__72->SetLineColor(ci);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_noTag_tagged_pt_jet2_ref__72->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_tagged_pt_jet2_ref__72->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet2_ref__72->Draw("HIST");
   pt_jet2_2018_QuadJet_noTag_18_tagged_ref->Modified();
   pt_jet2_2018_QuadJet_noTag_18_tagged_ref->cd();
   pt_jet2_2018_QuadJet_noTag_18_tagged_ref->SetSelected(pt_jet2_2018_QuadJet_noTag_18_tagged_ref);
}
