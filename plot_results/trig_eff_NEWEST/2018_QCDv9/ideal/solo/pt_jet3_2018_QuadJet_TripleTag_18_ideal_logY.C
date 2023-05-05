#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2018_QuadJet_TripleTag_18_ideal_logY()
{
//=========Macro generated from canvas: pt_jet3_2018_QuadJet_TripleTag_18_ideal/pt_jet3_2018_QuadJet_TripleTag_18_ideal
//=========  (Wed May  3 17:41:46 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2018_QuadJet_TripleTag_18_ideal = new TCanvas("pt_jet3_2018_QuadJet_TripleTag_18_ideal", "pt_jet3_2018_QuadJet_TripleTag_18_ideal",0,0,600,600);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetHighLightColor(2);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->Range(-100,-0.6792471,566.6667,3.102924);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetFillColor(0);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetBorderMode(0);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetBorderSize(2);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetLogy();
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetLeftMargin(0.15);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet3__11 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet3__11","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet3__11->SetBinContent(5,72);
   _QuadJet_TripleTag_ideal_pt_jet3__11->SetBinContent(6,270);
   _QuadJet_TripleTag_ideal_pt_jet3__11->SetBinContent(7,280);
   _QuadJet_TripleTag_ideal_pt_jet3__11->SetBinContent(8,234);
   _QuadJet_TripleTag_ideal_pt_jet3__11->SetBinContent(9,150);
   _QuadJet_TripleTag_ideal_pt_jet3__11->SetBinContent(10,121);
   _QuadJet_TripleTag_ideal_pt_jet3__11->SetBinContent(11,80);
   _QuadJet_TripleTag_ideal_pt_jet3__11->SetBinContent(12,58);
   _QuadJet_TripleTag_ideal_pt_jet3__11->SetBinContent(13,36);
   _QuadJet_TripleTag_ideal_pt_jet3__11->SetBinContent(14,27);
   _QuadJet_TripleTag_ideal_pt_jet3__11->SetBinContent(15,20);
   _QuadJet_TripleTag_ideal_pt_jet3__11->SetBinContent(16,11);
   _QuadJet_TripleTag_ideal_pt_jet3__11->SetBinContent(17,13);
   _QuadJet_TripleTag_ideal_pt_jet3__11->SetBinContent(18,4);
   _QuadJet_TripleTag_ideal_pt_jet3__11->SetBinContent(19,4);
   _QuadJet_TripleTag_ideal_pt_jet3__11->SetBinContent(20,5);
   _QuadJet_TripleTag_ideal_pt_jet3__11->SetBinContent(21,5);
   _QuadJet_TripleTag_ideal_pt_jet3__11->SetBinContent(23,1);
   _QuadJet_TripleTag_ideal_pt_jet3__11->SetBinContent(24,2);
   _QuadJet_TripleTag_ideal_pt_jet3__11->SetBinContent(25,1);
   _QuadJet_TripleTag_ideal_pt_jet3__11->SetBinContent(29,1);
   _QuadJet_TripleTag_ideal_pt_jet3__11->SetEntries(1395);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_ideal_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1395   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  80.95");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  29.56");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet3__11->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet3__11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_pt_jet3__11->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet3__11->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet3__11->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_ideal_pt_jet3__11->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__11->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet3__11->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__11->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_pt_jet3__11->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__11->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__11->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__11->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet3__11->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__11->Draw("HIST");
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->Modified();
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->cd();
   pt_jet3_2018_QuadJet_TripleTag_18_ideal->SetSelected(pt_jet3_2018_QuadJet_TripleTag_18_ideal);
}
