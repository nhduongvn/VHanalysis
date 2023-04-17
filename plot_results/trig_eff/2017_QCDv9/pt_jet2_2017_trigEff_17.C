#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2017_trigEff_17()
{
//=========Macro generated from canvas: pt_jet2_2017_trigEff_17/pt_jet2_2017_trigEff_17
//=========  (Fri Apr 14 11:35:38 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2017_trigEff_17 = new TCanvas("pt_jet2_2017_trigEff_17", "pt_jet2_2017_trigEff_17",0,0,600,600);
   pt_jet2_2017_trigEff_17->SetHighLightColor(2);
   pt_jet2_2017_trigEff_17->Range(-109.1764,-0.05048077,585.8166,0.3701923);
   pt_jet2_2017_trigEff_17->SetFillColor(0);
   pt_jet2_2017_trigEff_17->SetFillStyle(4000);
   pt_jet2_2017_trigEff_17->SetBorderMode(0);
   pt_jet2_2017_trigEff_17->SetBorderSize(2);
   pt_jet2_2017_trigEff_17->SetLeftMargin(0.15709);
   pt_jet2_2017_trigEff_17->SetRightMargin(0.1234783);
   pt_jet2_2017_trigEff_17->SetBottomMargin(0.12);
   pt_jet2_2017_trigEff_17->SetFrameFillStyle(1000);
   pt_jet2_2017_trigEff_17->SetFrameBorderMode(0);
   pt_jet2_2017_trigEff_17->SetFrameFillStyle(1000);
   pt_jet2_2017_trigEff_17->SetFrameBorderMode(0);
   
   TH1D *_trigEff_pt_jet2__11 = new TH1D("_trigEff_pt_jet2__11","",50,0,500);
   _trigEff_pt_jet2__11->SetBinContent(5,0.002813557);
   _trigEff_pt_jet2__11->SetBinContent(6,0.007984167);
   _trigEff_pt_jet2__11->SetBinContent(7,0.01869532);
   _trigEff_pt_jet2__11->SetBinContent(8,0.03102398);
   _trigEff_pt_jet2__11->SetBinContent(9,0.04238972);
   _trigEff_pt_jet2__11->SetBinContent(10,0.04895987);
   _trigEff_pt_jet2__11->SetBinContent(11,0.05091143);
   _trigEff_pt_jet2__11->SetBinContent(12,0.05365474);
   _trigEff_pt_jet2__11->SetBinContent(13,0.0565154);
   _trigEff_pt_jet2__11->SetBinContent(14,0.0567372);
   _trigEff_pt_jet2__11->SetBinContent(15,0.0611824);
   _trigEff_pt_jet2__11->SetBinContent(16,0.05770799);
   _trigEff_pt_jet2__11->SetBinContent(17,0.05932203);
   _trigEff_pt_jet2__11->SetBinContent(18,0.05938474);
   _trigEff_pt_jet2__11->SetBinContent(19,0.05328828);
   _trigEff_pt_jet2__11->SetBinContent(20,0.07072424);
   _trigEff_pt_jet2__11->SetBinContent(21,0.06505495);
   _trigEff_pt_jet2__11->SetBinContent(22,0.05367232);
   _trigEff_pt_jet2__11->SetBinContent(23,0.05930931);
   _trigEff_pt_jet2__11->SetBinContent(24,0.06427916);
   _trigEff_pt_jet2__11->SetBinContent(25,0.06427689);
   _trigEff_pt_jet2__11->SetBinContent(26,0.05194805);
   _trigEff_pt_jet2__11->SetBinContent(27,0.06654676);
   _trigEff_pt_jet2__11->SetBinContent(28,0.09133489);
   _trigEff_pt_jet2__11->SetBinContent(29,0.06104651);
   _trigEff_pt_jet2__11->SetBinContent(30,0.05639098);
   _trigEff_pt_jet2__11->SetBinContent(31,0.05882353);
   _trigEff_pt_jet2__11->SetBinContent(32,0.0625);
   _trigEff_pt_jet2__11->SetBinContent(33,0.07361963);
   _trigEff_pt_jet2__11->SetBinContent(34,0.04716981);
   _trigEff_pt_jet2__11->SetBinContent(35,0.05785124);
   _trigEff_pt_jet2__11->SetBinContent(36,0.05050505);
   _trigEff_pt_jet2__11->SetBinContent(37,0.02597403);
   _trigEff_pt_jet2__11->SetBinContent(38,0.03571429);
   _trigEff_pt_jet2__11->SetBinContent(39,0.08333333);
   _trigEff_pt_jet2__11->SetBinContent(40,0.05128205);
   _trigEff_pt_jet2__11->SetBinContent(41,0.1025641);
   _trigEff_pt_jet2__11->SetBinContent(42,0.05128205);
   _trigEff_pt_jet2__11->SetBinContent(43,0.03846154);
   _trigEff_pt_jet2__11->SetBinContent(44,0.1034483);
   _trigEff_pt_jet2__11->SetBinContent(45,0.1111111);
   _trigEff_pt_jet2__11->SetBinContent(46,0.3125);
   _trigEff_pt_jet2__11->SetBinContent(49,0.1818182);
   _trigEff_pt_jet2__11->SetBinContent(50,0.1111111);
   _trigEff_pt_jet2__11->SetBinContent(51,0.09459459);
   _trigEff_pt_jet2__11->SetEntries(2.924224);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_trigEff_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 3      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  310.8");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  128.9");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _trigEff_pt_jet2__11->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_trigEff_pt_jet2__11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _trigEff_pt_jet2__11->SetLineColor(ci);
   _trigEff_pt_jet2__11->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _trigEff_pt_jet2__11->GetXaxis()->SetRange(1,500);
   _trigEff_pt_jet2__11->GetXaxis()->SetLabelFont(42);
   _trigEff_pt_jet2__11->GetXaxis()->SetTitleOffset(1);
   _trigEff_pt_jet2__11->GetXaxis()->SetTitleFont(42);
   _trigEff_pt_jet2__11->GetYaxis()->SetTitle("Efficiency");
   _trigEff_pt_jet2__11->GetYaxis()->SetLabelFont(42);
   _trigEff_pt_jet2__11->GetYaxis()->SetTitleFont(42);
   _trigEff_pt_jet2__11->GetZaxis()->SetLabelFont(42);
   _trigEff_pt_jet2__11->GetZaxis()->SetTitleOffset(1);
   _trigEff_pt_jet2__11->GetZaxis()->SetTitleFont(42);
   _trigEff_pt_jet2__11->Draw("HIST");
   pt_jet2_2017_trigEff_17->Modified();
   pt_jet2_2017_trigEff_17->cd();
   pt_jet2_2017_trigEff_17->SetSelected(pt_jet2_2017_trigEff_17);
}
