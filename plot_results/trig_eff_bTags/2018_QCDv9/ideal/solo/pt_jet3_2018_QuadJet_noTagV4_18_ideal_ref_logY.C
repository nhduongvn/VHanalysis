#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2018_QuadJet_noTagV4_18_ideal_ref_logY()
{
//=========Macro generated from canvas: pt_jet3_2018_QuadJet_noTagV4_18_ideal_ref/pt_jet3_2018_QuadJet_noTagV4_18_ideal_ref
//=========  (Tue May  2 10:29:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2018_QuadJet_noTagV4_18_ideal_ref = new TCanvas("pt_jet3_2018_QuadJet_noTagV4_18_ideal_ref", "pt_jet3_2018_QuadJet_noTagV4_18_ideal_ref",0,0,600,600);
   pt_jet3_2018_QuadJet_noTagV4_18_ideal_ref->SetHighLightColor(2);
   pt_jet3_2018_QuadJet_noTagV4_18_ideal_ref->Range(-100,-0.6601607,566.6667,2.931146);
   pt_jet3_2018_QuadJet_noTagV4_18_ideal_ref->SetFillColor(0);
   pt_jet3_2018_QuadJet_noTagV4_18_ideal_ref->SetBorderMode(0);
   pt_jet3_2018_QuadJet_noTagV4_18_ideal_ref->SetBorderSize(2);
   pt_jet3_2018_QuadJet_noTagV4_18_ideal_ref->SetLogy();
   pt_jet3_2018_QuadJet_noTagV4_18_ideal_ref->SetLeftMargin(0.15);
   pt_jet3_2018_QuadJet_noTagV4_18_ideal_ref->SetFrameBorderMode(0);
   pt_jet3_2018_QuadJet_noTagV4_18_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTagV4_ideal_pt_jet3_ref__69 = new TH1D("_QuadJet_noTagV4_ideal_pt_jet3_ref__69","",50,0,500);
   _QuadJet_noTagV4_ideal_pt_jet3_ref__69->SetBinContent(5,48);
   _QuadJet_noTagV4_ideal_pt_jet3_ref__69->SetBinContent(6,140);
   _QuadJet_noTagV4_ideal_pt_jet3_ref__69->SetBinContent(7,158);
   _QuadJet_noTagV4_ideal_pt_jet3_ref__69->SetBinContent(8,197);
   _QuadJet_noTagV4_ideal_pt_jet3_ref__69->SetBinContent(9,160);
   _QuadJet_noTagV4_ideal_pt_jet3_ref__69->SetBinContent(10,131);
   _QuadJet_noTagV4_ideal_pt_jet3_ref__69->SetBinContent(11,86);
   _QuadJet_noTagV4_ideal_pt_jet3_ref__69->SetBinContent(12,62);
   _QuadJet_noTagV4_ideal_pt_jet3_ref__69->SetBinContent(13,41);
   _QuadJet_noTagV4_ideal_pt_jet3_ref__69->SetBinContent(14,29);
   _QuadJet_noTagV4_ideal_pt_jet3_ref__69->SetBinContent(15,23);
   _QuadJet_noTagV4_ideal_pt_jet3_ref__69->SetBinContent(16,12);
   _QuadJet_noTagV4_ideal_pt_jet3_ref__69->SetBinContent(17,13);
   _QuadJet_noTagV4_ideal_pt_jet3_ref__69->SetBinContent(18,4);
   _QuadJet_noTagV4_ideal_pt_jet3_ref__69->SetBinContent(19,4);
   _QuadJet_noTagV4_ideal_pt_jet3_ref__69->SetBinContent(20,5);
   _QuadJet_noTagV4_ideal_pt_jet3_ref__69->SetBinContent(21,6);
   _QuadJet_noTagV4_ideal_pt_jet3_ref__69->SetBinContent(23,2);
   _QuadJet_noTagV4_ideal_pt_jet3_ref__69->SetBinContent(24,2);
   _QuadJet_noTagV4_ideal_pt_jet3_ref__69->SetBinContent(25,1);
   _QuadJet_noTagV4_ideal_pt_jet3_ref__69->SetBinContent(29,1);
   _QuadJet_noTagV4_ideal_pt_jet3_ref__69->SetEntries(1125);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTagV4_ideal_pt_jet3_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1125   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  87.72");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  31.25");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTagV4_ideal_pt_jet3_ref__69->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTagV4_ideal_pt_jet3_ref__69);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTagV4_ideal_pt_jet3_ref__69->SetLineColor(ci);
   _QuadJet_noTagV4_ideal_pt_jet3_ref__69->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_noTagV4_ideal_pt_jet3_ref__69->GetXaxis()->SetRange(1,50);
   _QuadJet_noTagV4_ideal_pt_jet3_ref__69->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTagV4_ideal_pt_jet3_ref__69->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTagV4_ideal_pt_jet3_ref__69->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTagV4_ideal_pt_jet3_ref__69->GetYaxis()->SetTitle("Events");
   _QuadJet_noTagV4_ideal_pt_jet3_ref__69->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTagV4_ideal_pt_jet3_ref__69->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTagV4_ideal_pt_jet3_ref__69->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTagV4_ideal_pt_jet3_ref__69->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTagV4_ideal_pt_jet3_ref__69->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTagV4_ideal_pt_jet3_ref__69->Draw("HIST");
   pt_jet3_2018_QuadJet_noTagV4_18_ideal_ref->Modified();
   pt_jet3_2018_QuadJet_noTagV4_18_ideal_ref->cd();
   pt_jet3_2018_QuadJet_noTagV4_18_ideal_ref->SetSelected(pt_jet3_2018_QuadJet_noTagV4_18_ideal_ref);
}
