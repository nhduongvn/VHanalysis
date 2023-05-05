#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2018_QuadJet_TripleTag_18_ideal_logY()
{
//=========Macro generated from canvas: pt_jet0_2018_QuadJet_TripleTag_18_ideal/pt_jet0_2018_QuadJet_TripleTag_18_ideal
//=========  (Wed May  3 17:28:54 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2018_QuadJet_TripleTag_18_ideal = new TCanvas("pt_jet0_2018_QuadJet_TripleTag_18_ideal", "pt_jet0_2018_QuadJet_TripleTag_18_ideal",0,0,600,600);
   pt_jet0_2018_QuadJet_TripleTag_18_ideal->SetHighLightColor(2);
   pt_jet0_2018_QuadJet_TripleTag_18_ideal->Range(-100,-0.611913,566.6667,2.496917);
   pt_jet0_2018_QuadJet_TripleTag_18_ideal->SetFillColor(0);
   pt_jet0_2018_QuadJet_TripleTag_18_ideal->SetBorderMode(0);
   pt_jet0_2018_QuadJet_TripleTag_18_ideal->SetBorderSize(2);
   pt_jet0_2018_QuadJet_TripleTag_18_ideal->SetLogy();
   pt_jet0_2018_QuadJet_TripleTag_18_ideal->SetLeftMargin(0.15);
   pt_jet0_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   pt_jet0_2018_QuadJet_TripleTag_18_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet0__2 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet0__2","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(9,8);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(10,13);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(11,30);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(12,70);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(13,67);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(14,77);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(15,81);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(16,72);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(17,78);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(18,71);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(19,63);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(20,63);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(21,54);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(22,59);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(23,50);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(24,47);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(25,34);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(26,24);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(27,41);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(28,33);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(29,25);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(30,18);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(31,22);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(32,24);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(33,14);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(34,18);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(35,11);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(36,10);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(37,7);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(38,4);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(39,11);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(40,13);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(41,10);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(42,9);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(43,4);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(44,8);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(45,7);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(46,2);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(47,4);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(48,4);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(49,3);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(50,1);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetBinContent(51,37);
   _QuadJet_TripleTag_ideal_pt_jet0__2->SetEntries(1301);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_ideal_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1301   ");
   ptstats_LaTex = ptstats->AddText("Mean  =  209.8");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   83.4");
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
   pt_jet0_2018_QuadJet_TripleTag_18_ideal->Modified();
   pt_jet0_2018_QuadJet_TripleTag_18_ideal->cd();
   pt_jet0_2018_QuadJet_TripleTag_18_ideal->SetSelected(pt_jet0_2018_QuadJet_TripleTag_18_ideal);
}
