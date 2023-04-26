#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2018_QuadJet_TripleTag_18_ideal_logY()
{
//=========Macro generated from canvas: pt_jet0_2018_QuadJet_TripleTag_18_ideal/pt_jet0_2018_QuadJet_TripleTag_18_ideal
//=========  (Tue Apr 25 23:01:41 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2018_QuadJet_TripleTag_18_ideal = new TCanvas("pt_jet0_2018_QuadJet_TripleTag_18_ideal", "pt_jet0_2018_QuadJet_TripleTag_18_ideal",0,0,600,600);
   pt_jet0_2018_QuadJet_TripleTag_18_ideal->SetHighLightColor(2);
   pt_jet0_2018_QuadJet_TripleTag_18_ideal->Range(-100,0.6773174,566.6667,3.446569);
   pt_jet0_2018_QuadJet_TripleTag_18_ideal->SetFillColor(0);
   pt_jet0_2018_QuadJet_TripleTag_18_ideal->SetBorderMode(0);
   pt_jet0_2018_QuadJet_TripleTag_18_ideal->SetBorderSize(2);
   pt_jet0_2018_QuadJet_TripleTag_18_ideal->SetLogy();
   pt_jet0_2018_QuadJet_TripleTag_18_ideal->SetLeftMargin(0.15);
   pt_jet0_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   pt_jet0_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet0__110 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet0__110","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(8,18);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(9,108);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(10,293);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(11,425);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(12,595);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(13,728);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(14,732);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(15,780);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(16,739);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(17,733);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(18,713);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(19,659);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(20,585);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(21,499);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(22,487);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(23,382);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(24,363);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(25,298);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(26,303);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(27,268);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(28,264);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(29,226);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(30,200);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(31,206);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(32,153);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(33,133);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(34,127);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(35,115);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(36,121);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(37,88);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(38,81);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(39,88);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(40,79);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(41,67);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(42,74);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(43,47);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(44,55);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(45,50);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(46,47);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(47,41);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(48,49);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(49,32);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(50,37);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetBinContent(51,359);
   _QuadJet_TripleTag_ideal_pt_jet0__110->SetEntries(12447);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_ideal_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 12447  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  204.7");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  85.64");
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
   pt_jet0_2018_QuadJet_TripleTag_18_ideal->Modified();
   pt_jet0_2018_QuadJet_TripleTag_18_ideal->cd();
   pt_jet0_2018_QuadJet_TripleTag_18_ideal->SetSelected(pt_jet0_2018_QuadJet_TripleTag_18_ideal);
}
