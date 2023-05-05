#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2018_QuadJet_TripleTag_18_3B_ref_logY()
{
//=========Macro generated from canvas: pt_jet3_2018_QuadJet_TripleTag_18_3B_ref/pt_jet3_2018_QuadJet_TripleTag_18_3B_ref
//=========  (Wed May  3 17:41:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2018_QuadJet_TripleTag_18_3B_ref = new TCanvas("pt_jet3_2018_QuadJet_TripleTag_18_3B_ref", "pt_jet3_2018_QuadJet_TripleTag_18_3B_ref",0,0,600,600);
   pt_jet3_2018_QuadJet_TripleTag_18_3B_ref->SetHighLightColor(2);
   pt_jet3_2018_QuadJet_TripleTag_18_3B_ref->Range(-100,-0.8604044,566.6667,4.733339);
   pt_jet3_2018_QuadJet_TripleTag_18_3B_ref->SetFillColor(0);
   pt_jet3_2018_QuadJet_TripleTag_18_3B_ref->SetBorderMode(0);
   pt_jet3_2018_QuadJet_TripleTag_18_3B_ref->SetBorderSize(2);
   pt_jet3_2018_QuadJet_TripleTag_18_3B_ref->SetLogy();
   pt_jet3_2018_QuadJet_TripleTag_18_3B_ref->SetLeftMargin(0.15);
   pt_jet3_2018_QuadJet_TripleTag_18_3B_ref->SetFrameBorderMode(0);
   pt_jet3_2018_QuadJet_TripleTag_18_3B_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_3B_pt_jet3_ref__39 = new TH1D("_QuadJet_TripleTag_3B_pt_jet3_ref__39","",50,0,500);
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->SetBinContent(5,3567);
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->SetBinContent(6,7878);
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->SetBinContent(7,6253);
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->SetBinContent(8,4285);
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->SetBinContent(9,2495);
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->SetBinContent(10,1501);
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->SetBinContent(11,1005);
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->SetBinContent(12,619);
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->SetBinContent(13,420);
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->SetBinContent(14,282);
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->SetBinContent(15,156);
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->SetBinContent(16,120);
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->SetBinContent(17,88);
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->SetBinContent(18,46);
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->SetBinContent(19,25);
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->SetBinContent(20,27);
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->SetBinContent(21,28);
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->SetBinContent(22,11);
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->SetBinContent(23,10);
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->SetBinContent(24,10);
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->SetBinContent(25,4);
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->SetBinContent(26,7);
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->SetBinContent(27,2);
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->SetBinContent(28,1);
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->SetBinContent(29,1);
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->SetBinContent(31,1);
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->SetBinContent(33,3);
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->SetEntries(28845);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_3B_pt_jet3_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 28845  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  70.61");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  23.64");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_3B_pt_jet3_ref__39);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->SetLineColor(ci);
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_pt_jet3_ref__39->Draw("HIST");
   pt_jet3_2018_QuadJet_TripleTag_18_3B_ref->Modified();
   pt_jet3_2018_QuadJet_TripleTag_18_3B_ref->cd();
   pt_jet3_2018_QuadJet_TripleTag_18_3B_ref->SetSelected(pt_jet3_2018_QuadJet_TripleTag_18_3B_ref);
}
