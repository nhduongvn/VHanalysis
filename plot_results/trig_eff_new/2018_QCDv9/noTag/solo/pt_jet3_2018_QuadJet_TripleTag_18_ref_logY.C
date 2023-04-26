#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2018_QuadJet_TripleTag_18_ref_logY()
{
//=========Macro generated from canvas: pt_jet3_2018_QuadJet_TripleTag_18_ref/pt_jet3_2018_QuadJet_TripleTag_18_ref
//=========  (Tue Apr 25 23:01:40 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2018_QuadJet_TripleTag_18_ref = new TCanvas("pt_jet3_2018_QuadJet_TripleTag_18_ref", "pt_jet3_2018_QuadJet_TripleTag_18_ref",0,0,600,600);
   pt_jet3_2018_QuadJet_TripleTag_18_ref->SetHighLightColor(2);
   pt_jet3_2018_QuadJet_TripleTag_18_ref->Range(-100,-1.060492,566.6667,6.534124);
   pt_jet3_2018_QuadJet_TripleTag_18_ref->SetFillColor(0);
   pt_jet3_2018_QuadJet_TripleTag_18_ref->SetBorderMode(0);
   pt_jet3_2018_QuadJet_TripleTag_18_ref->SetBorderSize(2);
   pt_jet3_2018_QuadJet_TripleTag_18_ref->SetLogy();
   pt_jet3_2018_QuadJet_TripleTag_18_ref->SetLeftMargin(0.15);
   pt_jet3_2018_QuadJet_TripleTag_18_ref->SetFrameBorderMode(0);
   pt_jet3_2018_QuadJet_TripleTag_18_ref->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_pt_jet3_ref__21 = new TH1D("_QuadJet_TripleTag_pt_jet3_ref__21","",50,0,500);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(5,261688);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(6,314133);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(7,156424);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(8,83297);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(9,45660);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(10,26381);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(11,15536);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(12,9518);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(13,6108);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(14,3756);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(15,2471);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(16,1628);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(17,1154);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(18,756);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(19,529);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(20,349);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(21,246);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(22,193);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(23,147);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(24,94);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(25,70);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(26,46);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(27,52);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(28,35);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(29,21);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(30,17);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(31,16);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(32,8);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(33,8);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(34,7);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(35,4);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(36,7);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(37,7);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(38,1);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(39,4);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(40,6);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(41,1);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(42,1);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(43,1);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(44,1);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(48,1);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(49,1);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetBinContent(51,4);
   _QuadJet_TripleTag_pt_jet3_ref__21->SetEntries(930387);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_pt_jet3_ref");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 930387 ");
   ptstats_LaTex = ptstats->AddText("Mean  =  61.72");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  19.18");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_pt_jet3_ref__21->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_pt_jet3_ref__21);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_pt_jet3_ref__21->SetLineColor(ci);
   _QuadJet_TripleTag_pt_jet3_ref__21->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_pt_jet3_ref__21->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_pt_jet3_ref__21->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet3_ref__21->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet3_ref__21->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet3_ref__21->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_pt_jet3_ref__21->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet3_ref__21->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet3_ref__21->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_pt_jet3_ref__21->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_pt_jet3_ref__21->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_pt_jet3_ref__21->Draw("HIST");
   pt_jet3_2018_QuadJet_TripleTag_18_ref->Modified();
   pt_jet3_2018_QuadJet_TripleTag_18_ref->cd();
   pt_jet3_2018_QuadJet_TripleTag_18_ref->SetSelected(pt_jet3_2018_QuadJet_TripleTag_18_ref);
}
