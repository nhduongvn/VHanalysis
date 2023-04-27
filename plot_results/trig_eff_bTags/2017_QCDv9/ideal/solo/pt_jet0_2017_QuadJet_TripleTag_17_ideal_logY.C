#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2017_QuadJet_TripleTag_17_ideal_logY()
{
//=========Macro generated from canvas: pt_jet0_2017_QuadJet_TripleTag_17_ideal/pt_jet0_2017_QuadJet_TripleTag_17_ideal
//=========  (Thu Apr 27 10:19:53 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2017_QuadJet_TripleTag_17_ideal = new TCanvas("pt_jet0_2017_QuadJet_TripleTag_17_ideal", "pt_jet0_2017_QuadJet_TripleTag_17_ideal",0,0,600,600);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->SetHighLightColor(2);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->Range(-100,-0.5867987,566.6667,2.270888);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->SetFillColor(0);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->SetBorderMode(0);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->SetBorderSize(2);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->SetLogy();
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->SetLeftMargin(0.15);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet0__110 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet0__110","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(8,1);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(9,9);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(10,18);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(11,28);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(12,36);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(13,43);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(14,51);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(15,47);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(16,25);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(17,50);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(18,50);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(19,25);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(20,38);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(21,26);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(22,21);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(23,17);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(24,22);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(25,13);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(26,14);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(27,8);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(28,10);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(29,11);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(30,11);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(31,4);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(32,3);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(33,16);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(34,5);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(35,4);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(36,5);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(37,8);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(38,9);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(39,2);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(40,4);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(41,4);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(42,3);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(43,5);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(44,2);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(45,3);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(46,1);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(47,2);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(48,3);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(49,2);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(51,21);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetEntries(680);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_ideal_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 680    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  197.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =     85");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet0__110->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet0__110);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet0__110->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet0__110->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_ideal_pt_jet0__110->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0__110->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet0__110->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0__110->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_pt_jet0__110->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0__110->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0__110->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0__110->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet0__110->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0__110->Draw("HIST");
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->Modified();
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->cd();
   pt_jet0_2017_QuadJet_TripleTag_17_ideal->SetSelected(pt_jet0_2017_QuadJet_TripleTag_17_ideal);
}
