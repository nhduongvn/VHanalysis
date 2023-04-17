#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016v2_trigEff_16()
{
//=========Macro generated from canvas: pt_jet2_2016v2_trigEff_16/pt_jet2_2016v2_trigEff_16
//=========  (Fri Apr 14 11:35:38 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016v2_trigEff_16 = new TCanvas("pt_jet2_2016v2_trigEff_16", "pt_jet2_2016v2_trigEff_16",0,0,600,600);
   pt_jet2_2016v2_trigEff_16->SetHighLightColor(2);
   pt_jet2_2016v2_trigEff_16->Range(-109.1764,-0.06253102,585.8166,0.4585608);
   pt_jet2_2016v2_trigEff_16->SetFillColor(0);
   pt_jet2_2016v2_trigEff_16->SetFillStyle(4000);
   pt_jet2_2016v2_trigEff_16->SetBorderMode(0);
   pt_jet2_2016v2_trigEff_16->SetBorderSize(2);
   pt_jet2_2016v2_trigEff_16->SetLeftMargin(0.15709);
   pt_jet2_2016v2_trigEff_16->SetRightMargin(0.1234783);
   pt_jet2_2016v2_trigEff_16->SetBottomMargin(0.12);
   pt_jet2_2016v2_trigEff_16->SetFrameFillStyle(1000);
   pt_jet2_2016v2_trigEff_16->SetFrameBorderMode(0);
   pt_jet2_2016v2_trigEff_16->SetFrameFillStyle(1000);
   pt_jet2_2016v2_trigEff_16->SetFrameBorderMode(0);
   
   TH1D *v2_trigEff_pt_jet2__10 = new TH1D("v2_trigEff_pt_jet2__10","",50,0,500);
   v2_trigEff_pt_jet2__10->SetBinContent(5,0.01022179);
   v2_trigEff_pt_jet2__10->SetBinContent(6,0.01805696);
   v2_trigEff_pt_jet2__10->SetBinContent(7,0.03470628);
   v2_trigEff_pt_jet2__10->SetBinContent(8,0.06365315);
   v2_trigEff_pt_jet2__10->SetBinContent(9,0.1034528);
   v2_trigEff_pt_jet2__10->SetBinContent(10,0.1392691);
   v2_trigEff_pt_jet2__10->SetBinContent(11,0.1546441);
   v2_trigEff_pt_jet2__10->SetBinContent(12,0.1633637);
   v2_trigEff_pt_jet2__10->SetBinContent(13,0.1722513);
   v2_trigEff_pt_jet2__10->SetBinContent(14,0.1776245);
   v2_trigEff_pt_jet2__10->SetBinContent(15,0.184977);
   v2_trigEff_pt_jet2__10->SetBinContent(16,0.1793627);
   v2_trigEff_pt_jet2__10->SetBinContent(17,0.1880041);
   v2_trigEff_pt_jet2__10->SetBinContent(18,0.1865585);
   v2_trigEff_pt_jet2__10->SetBinContent(19,0.1979387);
   v2_trigEff_pt_jet2__10->SetBinContent(20,0.2122771);
   v2_trigEff_pt_jet2__10->SetBinContent(21,0.2006228);
   v2_trigEff_pt_jet2__10->SetBinContent(22,0.1864407);
   v2_trigEff_pt_jet2__10->SetBinContent(23,0.2104466);
   v2_trigEff_pt_jet2__10->SetBinContent(24,0.208561);
   v2_trigEff_pt_jet2__10->SetBinContent(25,0.2018779);
   v2_trigEff_pt_jet2__10->SetBinContent(26,0.2248322);
   v2_trigEff_pt_jet2__10->SetBinContent(27,0.2197802);
   v2_trigEff_pt_jet2__10->SetBinContent(28,0.2138229);
   v2_trigEff_pt_jet2__10->SetBinContent(29,0.1752022);
   v2_trigEff_pt_jet2__10->SetBinContent(30,0.2179931);
   v2_trigEff_pt_jet2__10->SetBinContent(31,0.2175732);
   v2_trigEff_pt_jet2__10->SetBinContent(32,0.296875);
   v2_trigEff_pt_jet2__10->SetBinContent(33,0.2386364);
   v2_trigEff_pt_jet2__10->SetBinContent(34,0.2293578);
   v2_trigEff_pt_jet2__10->SetBinContent(35,0.2190476);
   v2_trigEff_pt_jet2__10->SetBinContent(36,0.1684211);
   v2_trigEff_pt_jet2__10->SetBinContent(37,0.25);
   v2_trigEff_pt_jet2__10->SetBinContent(38,0.2028986);
   v2_trigEff_pt_jet2__10->SetBinContent(39,0.25);
   v2_trigEff_pt_jet2__10->SetBinContent(40,0.225);
   v2_trigEff_pt_jet2__10->SetBinContent(41,0.2);
   v2_trigEff_pt_jet2__10->SetBinContent(42,0.25);
   v2_trigEff_pt_jet2__10->SetBinContent(43,0.3870968);
   v2_trigEff_pt_jet2__10->SetBinContent(44,0.24);
   v2_trigEff_pt_jet2__10->SetBinContent(45,0.2727273);
   v2_trigEff_pt_jet2__10->SetBinContent(46,0.2916667);
   v2_trigEff_pt_jet2__10->SetBinContent(47,0.1428571);
   v2_trigEff_pt_jet2__10->SetBinContent(48,0.2);
   v2_trigEff_pt_jet2__10->SetBinContent(49,0.2857143);
   v2_trigEff_pt_jet2__10->SetBinContent(50,0.2222222);
   v2_trigEff_pt_jet2__10->SetBinContent(51,0.2647059);
   v2_trigEff_pt_jet2__10->SetEntries(9.036035);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016v2_trigEff_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 9      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  303.5");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  119.8");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   v2_trigEff_pt_jet2__10->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(v2_trigEff_pt_jet2__10);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   v2_trigEff_pt_jet2__10->SetLineColor(ci);
   v2_trigEff_pt_jet2__10->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   v2_trigEff_pt_jet2__10->GetXaxis()->SetRange(1,500);
   v2_trigEff_pt_jet2__10->GetXaxis()->SetLabelFont(42);
   v2_trigEff_pt_jet2__10->GetXaxis()->SetTitleOffset(1);
   v2_trigEff_pt_jet2__10->GetXaxis()->SetTitleFont(42);
   v2_trigEff_pt_jet2__10->GetYaxis()->SetTitle("Efficiency");
   v2_trigEff_pt_jet2__10->GetYaxis()->SetLabelFont(42);
   v2_trigEff_pt_jet2__10->GetYaxis()->SetTitleFont(42);
   v2_trigEff_pt_jet2__10->GetZaxis()->SetLabelFont(42);
   v2_trigEff_pt_jet2__10->GetZaxis()->SetTitleOffset(1);
   v2_trigEff_pt_jet2__10->GetZaxis()->SetTitleFont(42);
   v2_trigEff_pt_jet2__10->Draw("HIST");
   pt_jet2_2016v2_trigEff_16->Modified();
   pt_jet2_2016v2_trigEff_16->cd();
   pt_jet2_2016v2_trigEff_16->SetSelected(pt_jet2_2016v2_trigEff_16);
}
