#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2017_QuadJet_TripleTag_17_ideal_logY()
{
//=========Macro generated from canvas: pt_jet0_2017_QuadJet_TripleTag_17_ideal/pt_jet0_2017_QuadJet_TripleTag_17_ideal
//=========  (Tue May  2 10:43:26 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2017_QuadJet_TripleTag_17_ideal = new TCanvas("pt_jet0_2017_QuadJet_TripleTag_17_ideal", "pt_jet0_2017_QuadJet_TripleTag_17_ideal",0,0,600,600);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->SetHighLightColor(2);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->Range(-100,-0.5166184,566.6667,1.639265);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->SetFillColor(0);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->SetBorderMode(0);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->SetBorderSize(2);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->SetLogy();
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->SetLeftMargin(0.15);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet0__2 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet0__2","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(9,2);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(10,4);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(11,7);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(12,13);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(13,9);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(14,11);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(15,14);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(16,4);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(17,11);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(18,14);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(19,5);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(20,8);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(21,3);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(22,6);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(23,2);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(24,9);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(25,3);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(26,2);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(27,4);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(28,1);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(29,3);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(30,2);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(33,4);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(34,3);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(35,2);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(36,2);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(37,1);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(38,2);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(39,1);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(41,2);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(42,1);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(43,2);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(45,1);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(47,1);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(48,2);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(51,6);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetEntries(167);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_ideal_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 167    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  201.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  90.83");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet0__2->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet0__2);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet0__2->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet0__2->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_ideal_pt_jet0__2->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0__2->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet0__2->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0__2->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_pt_jet0__2->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0__2->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0__2->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0__2->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet0__2->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0__2->Draw("HIST");
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->Modified();
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->cd();
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->SetSelected(pt_jet0_2017_QuadJet_TripleTag_17_ideal);
}
