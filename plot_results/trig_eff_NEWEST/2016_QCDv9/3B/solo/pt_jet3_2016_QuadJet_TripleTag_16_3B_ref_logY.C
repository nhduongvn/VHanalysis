#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_QuadJet_TripleTag_16_3B_ref_logY()
{
//=========Macro generated from canvas: pt_jet3_2016_QuadJet_TripleTag_16_3B_ref/pt_jet3_2016_QuadJet_TripleTag_16_3B_ref
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_QuadJet_TripleTag_16_3B_ref = new TCanvas("pt_jet3_2016_QuadJet_TripleTag_16_3B_ref", "pt_jet3_2016_QuadJet_TripleTag_16_3B_ref",0,0,600,600);
   pt_jet3_2016_QuadJet_TripleTag_16_3B_ref->SetHighLightColor(2);
   pt_jet3_2016_QuadJet_TripleTag_16_3B_ref->Range(-100,-0.8465097,566.6667,4.608287);
   pt_jet3_2016_QuadJet_TripleTag_16_3B_ref->SetFillColor(0);
   pt_jet3_2016_QuadJet_TripleTag_16_3B_ref->SetBorderMode(0);
   pt_jet3_2016_QuadJet_TripleTag_16_3B_ref->SetBorderSize(2);
   pt_jet3_2016_QuadJet_TripleTag_16_3B_ref->SetLogy();
   pt_jet3_2016_QuadJet_TripleTag_16_3B_ref->SetLeftMargin(0.15);
   pt_jet3_2016_QuadJet_TripleTag_16_3B_ref->SetFrameBorderMode(0);
   pt_jet3_2016_QuadJet_TripleTag_16_3B_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_3B_pt_jet3_ref__75 = new TH1D("_QuadJet_TripleTag_3B_pt_jet3_ref__75","",50,0,500);
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->SetBinContent(5,4236);
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->SetBinContent(6,6099);
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->SetBinContent(7,3701);
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->SetBinContent(8,2162);
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->SetBinContent(9,1340);
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->SetBinContent(10,824);
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->SetBinContent(11,533);
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->SetBinContent(12,351);
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->SetBinContent(13,208);
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->SetBinContent(14,158);
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->SetBinContent(15,88);
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->SetBinContent(16,70);
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->SetBinContent(17,51);
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->SetBinContent(18,33);
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->SetBinContent(19,12);
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->SetBinContent(20,12);
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->SetBinContent(21,7);
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->SetBinContent(22,11);
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->SetBinContent(23,3);
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->SetBinContent(24,4);
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->SetBinContent(25,2);
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->SetBinContent(26,3);
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->SetBinContent(27,5);
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->SetBinContent(28,1);
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->SetBinContent(29,2);
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->SetBinContent(37,1);
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->SetEntries(19917);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_3B_pt_jet3_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 19917  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  66.25");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  22.72");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_3B_pt_jet3_ref__75);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->SetLineColor(ci);
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_3B_pt_jet3_ref__75->Draw("HIST");
   pt_jet3_2016_QuadJet_TripleTag_16_3B_ref->Modified();
   pt_jet3_2016_QuadJet_TripleTag_16_3B_ref->cd();
   pt_jet3_2016_QuadJet_TripleTag_16_3B_ref->SetSelected(pt_jet3_2016_QuadJet_TripleTag_16_3B_ref);
}
