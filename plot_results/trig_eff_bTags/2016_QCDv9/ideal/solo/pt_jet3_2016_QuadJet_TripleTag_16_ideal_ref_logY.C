#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_QuadJet_TripleTag_16_ideal_ref_logY()
{
//=========Macro generated from canvas: pt_jet3_2016_QuadJet_TripleTag_16_ideal_ref/pt_jet3_2016_QuadJet_TripleTag_16_ideal_ref
//=========  (Thu Apr 27 10:19:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_QuadJet_TripleTag_16_ideal_ref = new TCanvas("pt_jet3_2016_QuadJet_TripleTag_16_ideal_ref", "pt_jet3_2016_QuadJet_TripleTag_16_ideal_ref",0,0,600,600);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal_ref->SetHighLightColor(2);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal_ref->Range(-100,-0.6701959,566.6667,3.021463);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal_ref->SetFillColor(0);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal_ref->SetBorderMode(0);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal_ref->SetBorderSize(2);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal_ref->SetLogy();
   pt_jet3_2016_QuadJet_TripleTag_16_ideal_ref->SetLeftMargin(0.15);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal_ref->SetFrameBorderMode(0);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet3_ref__255 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet3_ref__255","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__255->SetBinContent(5,112);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__255->SetBinContent(6,237);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__255->SetBinContent(7,215);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__255->SetBinContent(8,122);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__255->SetBinContent(9,88);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__255->SetBinContent(10,60);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__255->SetBinContent(11,51);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__255->SetBinContent(12,34);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__255->SetBinContent(13,19);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__255->SetBinContent(14,9);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__255->SetBinContent(15,10);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__255->SetBinContent(16,7);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__255->SetBinContent(17,4);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__255->SetBinContent(18,2);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__255->SetBinContent(19,1);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__255->SetBinContent(20,2);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__255->SetBinContent(22,1);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__255->SetBinContent(24,1);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__255->SetBinContent(26,1);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__255->SetBinContent(27,2);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__255->SetEntries(978);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_ideal_pt_jet3_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 978    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  74.38");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   27.7");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet3_ref__255->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet3_ref__255);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_pt_jet3_ref__255->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__255->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet3_ref__255->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__255->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__255->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__255->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__255->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_pt_jet3_ref__255->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__255->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__255->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__255->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__255->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3_ref__255->Draw("HIST");
   pt_jet3_2016_QuadJet_TripleTag_16_ideal_ref->Modified();
   pt_jet3_2016_QuadJet_TripleTag_16_ideal_ref->cd();
   pt_jet3_2016_QuadJet_TripleTag_16_ideal_ref->SetSelected(pt_jet3_2016_QuadJet_TripleTag_16_ideal_ref);
}
