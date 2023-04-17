#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2017_trigEff_17()
{
//=========Macro generated from canvas: pt_jet3_2017_trigEff_17/pt_jet3_2017_trigEff_17
//=========  (Fri Apr 14 11:35:38 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2017_trigEff_17 = new TCanvas("pt_jet3_2017_trigEff_17", "pt_jet3_2017_trigEff_17",0,0,600,600);
   pt_jet3_2017_trigEff_17->SetHighLightColor(2);
   pt_jet3_2017_trigEff_17->Range(-109.1764,-0.08076923,585.8166,0.5923077);
   pt_jet3_2017_trigEff_17->SetFillColor(0);
   pt_jet3_2017_trigEff_17->SetFillStyle(4000);
   pt_jet3_2017_trigEff_17->SetBorderMode(0);
   pt_jet3_2017_trigEff_17->SetBorderSize(2);
   pt_jet3_2017_trigEff_17->SetLeftMargin(0.15709);
   pt_jet3_2017_trigEff_17->SetRightMargin(0.1234783);
   pt_jet3_2017_trigEff_17->SetBottomMargin(0.12);
   pt_jet3_2017_trigEff_17->SetFrameFillStyle(1000);
   pt_jet3_2017_trigEff_17->SetFrameBorderMode(0);
   pt_jet3_2017_trigEff_17->SetFrameFillStyle(1000);
   pt_jet3_2017_trigEff_17->SetFrameBorderMode(0);
   
   TH1D *_trigEff_pt_jet3__15 = new TH1D("_trigEff_pt_jet3__15","",50,0,500);
   _trigEff_pt_jet3__15->SetBinContent(5,0.00940052);
   _trigEff_pt_jet3__15->SetBinContent(6,0.0205735);
   _trigEff_pt_jet3__15->SetBinContent(7,0.03931976);
   _trigEff_pt_jet3__15->SetBinContent(8,0.05381042);
   _trigEff_pt_jet3__15->SetBinContent(9,0.0626693);
   _trigEff_pt_jet3__15->SetBinContent(10,0.06800434);
   _trigEff_pt_jet3__15->SetBinContent(11,0.07230891);
   _trigEff_pt_jet3__15->SetBinContent(12,0.07110786);
   _trigEff_pt_jet3__15->SetBinContent(13,0.07449433);
   _trigEff_pt_jet3__15->SetBinContent(14,0.07467854);
   _trigEff_pt_jet3__15->SetBinContent(15,0.07511381);
   _trigEff_pt_jet3__15->SetBinContent(16,0.09224442);
   _trigEff_pt_jet3__15->SetBinContent(17,0.07805724);
   _trigEff_pt_jet3__15->SetBinContent(18,0.08657465);
   _trigEff_pt_jet3__15->SetBinContent(19,0.05984556);
   _trigEff_pt_jet3__15->SetBinContent(20,0.09756098);
   _trigEff_pt_jet3__15->SetBinContent(21,0.06291391);
   _trigEff_pt_jet3__15->SetBinContent(22,0.065);
   _trigEff_pt_jet3__15->SetBinContent(23,0.07142857);
   _trigEff_pt_jet3__15->SetBinContent(24,0.1083333);
   _trigEff_pt_jet3__15->SetBinContent(25,0.1086957);
   _trigEff_pt_jet3__15->SetBinContent(26,0.05454545);
   _trigEff_pt_jet3__15->SetBinContent(27,0.04651163);
   _trigEff_pt_jet3__15->SetBinContent(28,0.1590909);
   _trigEff_pt_jet3__15->SetBinContent(29,0.15625);
   _trigEff_pt_jet3__15->SetBinContent(30,0.07407407);
   _trigEff_pt_jet3__15->SetBinContent(32,0.1666667);
   _trigEff_pt_jet3__15->SetBinContent(33,0.06666667);
   _trigEff_pt_jet3__15->SetBinContent(35,0.1428571);
   _trigEff_pt_jet3__15->SetBinContent(41,0.2);
   _trigEff_pt_jet3__15->SetBinContent(47,0.5);
   _trigEff_pt_jet3__15->SetBinContent(51,0.2);
   _trigEff_pt_jet3__15->SetEntries(3.018798);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_trigEff_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 3      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  267.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  123.3");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _trigEff_pt_jet3__15->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_trigEff_pt_jet3__15);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _trigEff_pt_jet3__15->SetLineColor(ci);
   _trigEff_pt_jet3__15->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _trigEff_pt_jet3__15->GetXaxis()->SetRange(1,500);
   _trigEff_pt_jet3__15->GetXaxis()->SetLabelFont(42);
   _trigEff_pt_jet3__15->GetXaxis()->SetTitleOffset(1);
   _trigEff_pt_jet3__15->GetXaxis()->SetTitleFont(42);
   _trigEff_pt_jet3__15->GetYaxis()->SetTitle("Efficiency");
   _trigEff_pt_jet3__15->GetYaxis()->SetLabelFont(42);
   _trigEff_pt_jet3__15->GetYaxis()->SetTitleFont(42);
   _trigEff_pt_jet3__15->GetZaxis()->SetLabelFont(42);
   _trigEff_pt_jet3__15->GetZaxis()->SetTitleOffset(1);
   _trigEff_pt_jet3__15->GetZaxis()->SetTitleFont(42);
   _trigEff_pt_jet3__15->Draw("HIST");
   pt_jet3_2017_trigEff_17->Modified();
   pt_jet3_2017_trigEff_17->cd();
   pt_jet3_2017_trigEff_17->SetSelected(pt_jet3_2017_trigEff_17);
}
