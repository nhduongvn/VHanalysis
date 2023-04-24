#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2018_QuadJet_TripleTag_18()
{
//=========Macro generated from canvas: pt_jet3_2018_QuadJet_TripleTag_18/pt_jet3_2018_QuadJet_TripleTag_18
//=========  (Mon Apr 24 10:45:56 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2018_QuadJet_TripleTag_18 = new TCanvas("pt_jet3_2018_QuadJet_TripleTag_18", "pt_jet3_2018_QuadJet_TripleTag_18",0,0,600,600);
   pt_jet3_2018_QuadJet_TripleTag_18->SetHighLightColor(2);
   pt_jet3_2018_QuadJet_TripleTag_18->Range(-109.1764,-0.1615385,585.8166,1.184615);
   pt_jet3_2018_QuadJet_TripleTag_18->SetFillColor(0);
   pt_jet3_2018_QuadJet_TripleTag_18->SetFillStyle(4000);
   pt_jet3_2018_QuadJet_TripleTag_18->SetBorderMode(0);
   pt_jet3_2018_QuadJet_TripleTag_18->SetBorderSize(2);
   pt_jet3_2018_QuadJet_TripleTag_18->SetLeftMargin(0.15709);
   pt_jet3_2018_QuadJet_TripleTag_18->SetRightMargin(0.1234783);
   pt_jet3_2018_QuadJet_TripleTag_18->SetBottomMargin(0.12);
   pt_jet3_2018_QuadJet_TripleTag_18->SetFrameFillStyle(1000);
   pt_jet3_2018_QuadJet_TripleTag_18->SetFrameBorderMode(0);
   pt_jet3_2018_QuadJet_TripleTag_18->SetFrameFillStyle(1000);
   pt_jet3_2018_QuadJet_TripleTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_pt_jet3__73 = new TH1D("_QuadJet_TripleTag_tagged_pt_jet3__73","",50,0,500);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(5,0.08579062);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(6,0.1633607);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(7,0.2633118);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(8,0.3377995);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(9,0.3611111);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(10,0.3870574);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(11,0.3978829);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(12,0.3933137);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(13,0.4154519);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(14,0.4310722);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(15,0.3898917);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(16,0.4419643);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(17,0.379845);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(18,0.3888889);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(19,0.3870968);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(20,0.4716981);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(21,0.46);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(22,0.2666667);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(23,0.2380952);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(24,0.5555556);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(25,0.5);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(26,0.2727273);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(27,0.3333333);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(28,0.6666667);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(29,0.3333333);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(32,1);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(33,1);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(34,1);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetBinContent(35,1);
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetEntries(13.32191);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_TripleTag_tagged_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 13     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  221.7");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  90.95");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_pt_jet3__73->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_pt_jet3__73);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_TripleTag_tagged_pt_jet3__73->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_pt_jet3__73->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_tagged_pt_jet3__73->GetXaxis()->SetRange(1,500);
   _QuadJet_TripleTag_tagged_pt_jet3__73->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__73->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet3__73->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__73->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_TripleTag_tagged_pt_jet3__73->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__73->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__73->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__73->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_pt_jet3__73->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_pt_jet3__73->Draw("HIST");
   pt_jet3_2018_QuadJet_TripleTag_18->Modified();
   pt_jet3_2018_QuadJet_TripleTag_18->cd();
   pt_jet3_2018_QuadJet_TripleTag_18->SetSelected(pt_jet3_2018_QuadJet_TripleTag_18);
}
