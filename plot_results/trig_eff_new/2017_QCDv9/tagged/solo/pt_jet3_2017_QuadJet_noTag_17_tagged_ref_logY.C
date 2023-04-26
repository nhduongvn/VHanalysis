#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2017_QuadJet_noTag_17_tagged_ref_logY()
{
//=========Macro generated from canvas: pt_jet3_2017_QuadJet_noTag_17_tagged_ref/pt_jet3_2017_QuadJet_noTag_17_tagged_ref
//=========  (Tue Apr 25 23:02:18 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2017_QuadJet_noTag_17_tagged_ref = new TCanvas("pt_jet3_2017_QuadJet_noTag_17_tagged_ref", "pt_jet3_2017_QuadJet_noTag_17_tagged_ref",0,0,600,600);
   pt_jet3_2017_QuadJet_noTag_17_tagged_ref->SetHighLightColor(2);
   pt_jet3_2017_QuadJet_noTag_17_tagged_ref->Range(-100,-0.8660289,566.6667,4.78396);
   pt_jet3_2017_QuadJet_noTag_17_tagged_ref->SetFillColor(0);
   pt_jet3_2017_QuadJet_noTag_17_tagged_ref->SetBorderMode(0);
   pt_jet3_2017_QuadJet_noTag_17_tagged_ref->SetBorderSize(2);
   pt_jet3_2017_QuadJet_noTag_17_tagged_ref->SetLogy();
   pt_jet3_2017_QuadJet_noTag_17_tagged_ref->SetLeftMargin(0.15);
   pt_jet3_2017_QuadJet_noTag_17_tagged_ref->SetFrameBorderMode(0);
   pt_jet3_2017_QuadJet_noTag_17_tagged_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_pt_jet3_ref__78 = new TH1D("_QuadJet_noTag_tagged_pt_jet3_ref__78","",50,0,500);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(5,5609);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(6,8738);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(7,5457);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(8,3525);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(9,2173);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(10,1356);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(11,903);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(12,568);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(13,369);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(14,260);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(15,170);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(16,106);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(17,69);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(18,60);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(19,32);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(20,16);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(21,19);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(22,14);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(23,10);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(24,3);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(25,5);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(26,2);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(27,3);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(28,4);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(29,2);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(30,1);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetBinContent(45,1);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetEntries(29475);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_tagged_pt_jet3_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 29475  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  67.78");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  23.49");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_pt_jet3_ref__78->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_pt_jet3_ref__78);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_tagged_pt_jet3_ref__78->SetLineColor(ci);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_noTag_tagged_pt_jet3_ref__78->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_tagged_pt_jet3_ref__78->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet3_ref__78->Draw("HIST");
   pt_jet3_2017_QuadJet_noTag_17_tagged_ref->Modified();
   pt_jet3_2017_QuadJet_noTag_17_tagged_ref->cd();
   pt_jet3_2017_QuadJet_noTag_17_tagged_ref->SetSelected(pt_jet3_2017_QuadJet_noTag_17_tagged_ref);
}
