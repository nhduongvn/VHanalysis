#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016v1_trigEff_16()
{
//=========Macro generated from canvas: pt_jet3_2016v1_trigEff_16/pt_jet3_2016v1_trigEff_16
//=========  (Fri Apr 14 11:35:38 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016v1_trigEff_16 = new TCanvas("pt_jet3_2016v1_trigEff_16", "pt_jet3_2016v1_trigEff_16",0,0,600,600);
   pt_jet3_2016v1_trigEff_16->SetHighLightColor(2);
   pt_jet3_2016v1_trigEff_16->Range(-109.1764,-0.1076923,585.8166,0.7897436);
   pt_jet3_2016v1_trigEff_16->SetFillColor(0);
   pt_jet3_2016v1_trigEff_16->SetFillStyle(4000);
   pt_jet3_2016v1_trigEff_16->SetBorderMode(0);
   pt_jet3_2016v1_trigEff_16->SetBorderSize(2);
   pt_jet3_2016v1_trigEff_16->SetLeftMargin(0.15709);
   pt_jet3_2016v1_trigEff_16->SetRightMargin(0.1234783);
   pt_jet3_2016v1_trigEff_16->SetBottomMargin(0.12);
   pt_jet3_2016v1_trigEff_16->SetFrameFillStyle(1000);
   pt_jet3_2016v1_trigEff_16->SetFrameBorderMode(0);
   pt_jet3_2016v1_trigEff_16->SetFrameFillStyle(1000);
   pt_jet3_2016v1_trigEff_16->SetFrameBorderMode(0);
   
   TH1D *v1_trigEff_pt_jet3__13 = new TH1D("v1_trigEff_pt_jet3__13","",50,0,500);
   v1_trigEff_pt_jet3__13->SetBinContent(5,0.04153052);
   v1_trigEff_pt_jet3__13->SetBinContent(6,0.08095637);
   v1_trigEff_pt_jet3__13->SetBinContent(7,0.125441);
   v1_trigEff_pt_jet3__13->SetBinContent(8,0.1548263);
   v1_trigEff_pt_jet3__13->SetBinContent(9,0.1755802);
   v1_trigEff_pt_jet3__13->SetBinContent(10,0.1870118);
   v1_trigEff_pt_jet3__13->SetBinContent(11,0.2018291);
   v1_trigEff_pt_jet3__13->SetBinContent(12,0.2144246);
   v1_trigEff_pt_jet3__13->SetBinContent(13,0.2236645);
   v1_trigEff_pt_jet3__13->SetBinContent(14,0.2403722);
   v1_trigEff_pt_jet3__13->SetBinContent(15,0.2245379);
   v1_trigEff_pt_jet3__13->SetBinContent(16,0.2280093);
   v1_trigEff_pt_jet3__13->SetBinContent(17,0.2476024);
   v1_trigEff_pt_jet3__13->SetBinContent(18,0.2785146);
   v1_trigEff_pt_jet3__13->SetBinContent(19,0.2428331);
   v1_trigEff_pt_jet3__13->SetBinContent(20,0.2584856);
   v1_trigEff_pt_jet3__13->SetBinContent(21,0.2465753);
   v1_trigEff_pt_jet3__13->SetBinContent(22,0.2769231);
   v1_trigEff_pt_jet3__13->SetBinContent(23,0.3116883);
   v1_trigEff_pt_jet3__13->SetBinContent(24,0.2521739);
   v1_trigEff_pt_jet3__13->SetBinContent(25,0.2933333);
   v1_trigEff_pt_jet3__13->SetBinContent(26,0.3050847);
   v1_trigEff_pt_jet3__13->SetBinContent(27,0.3809524);
   v1_trigEff_pt_jet3__13->SetBinContent(28,0.15);
   v1_trigEff_pt_jet3__13->SetBinContent(29,0.25);
   v1_trigEff_pt_jet3__13->SetBinContent(30,0.2916667);
   v1_trigEff_pt_jet3__13->SetBinContent(31,0.3571429);
   v1_trigEff_pt_jet3__13->SetBinContent(32,0.4615385);
   v1_trigEff_pt_jet3__13->SetBinContent(33,0.3333333);
   v1_trigEff_pt_jet3__13->SetBinContent(35,0.25);
   v1_trigEff_pt_jet3__13->SetBinContent(36,0.1666667);
   v1_trigEff_pt_jet3__13->SetBinContent(37,0.6666667);
   v1_trigEff_pt_jet3__13->SetBinContent(38,0.4);
   v1_trigEff_pt_jet3__13->SetBinContent(50,0.5);
   v1_trigEff_pt_jet3__13->SetBinContent(51,0.6666667);
   v1_trigEff_pt_jet3__13->SetEntries(9.019365);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016v1_trigEff_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 9      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  250.1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  107.3");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   v1_trigEff_pt_jet3__13->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(v1_trigEff_pt_jet3__13);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   v1_trigEff_pt_jet3__13->SetLineColor(ci);
   v1_trigEff_pt_jet3__13->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   v1_trigEff_pt_jet3__13->GetXaxis()->SetRange(1,500);
   v1_trigEff_pt_jet3__13->GetXaxis()->SetLabelFont(42);
   v1_trigEff_pt_jet3__13->GetXaxis()->SetTitleOffset(1);
   v1_trigEff_pt_jet3__13->GetXaxis()->SetTitleFont(42);
   v1_trigEff_pt_jet3__13->GetYaxis()->SetTitle("Efficiency");
   v1_trigEff_pt_jet3__13->GetYaxis()->SetLabelFont(42);
   v1_trigEff_pt_jet3__13->GetYaxis()->SetTitleFont(42);
   v1_trigEff_pt_jet3__13->GetZaxis()->SetLabelFont(42);
   v1_trigEff_pt_jet3__13->GetZaxis()->SetTitleOffset(1);
   v1_trigEff_pt_jet3__13->GetZaxis()->SetTitleFont(42);
   v1_trigEff_pt_jet3__13->Draw("HIST");
   pt_jet3_2016v1_trigEff_16->Modified();
   pt_jet3_2016v1_trigEff_16->cd();
   pt_jet3_2016v1_trigEff_16->SetSelected(pt_jet3_2016v1_trigEff_16);
}
