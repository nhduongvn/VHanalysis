#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2017_trigEff_17()
{
//=========Macro generated from canvas: pt_jet1_2017_trigEff_17/pt_jet1_2017_trigEff_17
//=========  (Fri Apr 14 11:35:38 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2017_trigEff_17 = new TCanvas("pt_jet1_2017_trigEff_17", "pt_jet1_2017_trigEff_17",0,0,600,600);
   pt_jet1_2017_trigEff_17->SetHighLightColor(2);
   pt_jet1_2017_trigEff_17->Range(-109.1764,-0.01257485,585.8166,0.09221557);
   pt_jet1_2017_trigEff_17->SetFillColor(0);
   pt_jet1_2017_trigEff_17->SetFillStyle(4000);
   pt_jet1_2017_trigEff_17->SetBorderMode(0);
   pt_jet1_2017_trigEff_17->SetBorderSize(2);
   pt_jet1_2017_trigEff_17->SetLeftMargin(0.15709);
   pt_jet1_2017_trigEff_17->SetRightMargin(0.1234783);
   pt_jet1_2017_trigEff_17->SetBottomMargin(0.12);
   pt_jet1_2017_trigEff_17->SetFrameFillStyle(1000);
   pt_jet1_2017_trigEff_17->SetFrameBorderMode(0);
   pt_jet1_2017_trigEff_17->SetFrameFillStyle(1000);
   pt_jet1_2017_trigEff_17->SetFrameBorderMode(0);
   
   TH1D *_trigEff_pt_jet1__7 = new TH1D("_trigEff_pt_jet1__7","",50,0,500);
   _trigEff_pt_jet1__7->SetBinContent(5,0.0007313951);
   _trigEff_pt_jet1__7->SetBinContent(6,0.00139229);
   _trigEff_pt_jet1__7->SetBinContent(7,0.004875046);
   _trigEff_pt_jet1__7->SetBinContent(8,0.01271945);
   _trigEff_pt_jet1__7->SetBinContent(9,0.02346668);
   _trigEff_pt_jet1__7->SetBinContent(10,0.03168613);
   _trigEff_pt_jet1__7->SetBinContent(11,0.03830983);
   _trigEff_pt_jet1__7->SetBinContent(12,0.04108504);
   _trigEff_pt_jet1__7->SetBinContent(13,0.04375127);
   _trigEff_pt_jet1__7->SetBinContent(14,0.04440765);
   _trigEff_pt_jet1__7->SetBinContent(15,0.04601283);
   _trigEff_pt_jet1__7->SetBinContent(16,0.04787251);
   _trigEff_pt_jet1__7->SetBinContent(17,0.04634185);
   _trigEff_pt_jet1__7->SetBinContent(18,0.04579184);
   _trigEff_pt_jet1__7->SetBinContent(19,0.04611244);
   _trigEff_pt_jet1__7->SetBinContent(20,0.04948216);
   _trigEff_pt_jet1__7->SetBinContent(21,0.04925242);
   _trigEff_pt_jet1__7->SetBinContent(22,0.04524083);
   _trigEff_pt_jet1__7->SetBinContent(23,0.04661445);
   _trigEff_pt_jet1__7->SetBinContent(24,0.05101264);
   _trigEff_pt_jet1__7->SetBinContent(25,0.04940466);
   _trigEff_pt_jet1__7->SetBinContent(26,0.0437299);
   _trigEff_pt_jet1__7->SetBinContent(27,0.04940083);
   _trigEff_pt_jet1__7->SetBinContent(28,0.05128924);
   _trigEff_pt_jet1__7->SetBinContent(29,0.05068027);
   _trigEff_pt_jet1__7->SetBinContent(30,0.05168363);
   _trigEff_pt_jet1__7->SetBinContent(31,0.05840392);
   _trigEff_pt_jet1__7->SetBinContent(32,0.04688279);
   _trigEff_pt_jet1__7->SetBinContent(33,0.04602273);
   _trigEff_pt_jet1__7->SetBinContent(34,0.0431701);
   _trigEff_pt_jet1__7->SetBinContent(35,0.05238468);
   _trigEff_pt_jet1__7->SetBinContent(36,0.05066667);
   _trigEff_pt_jet1__7->SetBinContent(37,0.05340314);
   _trigEff_pt_jet1__7->SetBinContent(38,0.0529876);
   _trigEff_pt_jet1__7->SetBinContent(39,0.05012531);
   _trigEff_pt_jet1__7->SetBinContent(40,0.04934688);
   _trigEff_pt_jet1__7->SetBinContent(41,0.04094488);
   _trigEff_pt_jet1__7->SetBinContent(42,0.04401408);
   _trigEff_pt_jet1__7->SetBinContent(43,0.07784431);
   _trigEff_pt_jet1__7->SetBinContent(44,0.02293578);
   _trigEff_pt_jet1__7->SetBinContent(45,0.05037783);
   _trigEff_pt_jet1__7->SetBinContent(46,0.04314721);
   _trigEff_pt_jet1__7->SetBinContent(47,0.06104651);
   _trigEff_pt_jet1__7->SetBinContent(48,0.03424658);
   _trigEff_pt_jet1__7->SetBinContent(49,0.0490566);
   _trigEff_pt_jet1__7->SetBinContent(50,0.05166052);
   _trigEff_pt_jet1__7->SetBinContent(51,0.04470323);
   _trigEff_pt_jet1__7->SetEntries(1.991015);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_trigEff_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 2      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  294.9");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  118.7");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _trigEff_pt_jet1__7->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_trigEff_pt_jet1__7);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _trigEff_pt_jet1__7->SetLineColor(ci);
   _trigEff_pt_jet1__7->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _trigEff_pt_jet1__7->GetXaxis()->SetRange(1,500);
   _trigEff_pt_jet1__7->GetXaxis()->SetLabelFont(42);
   _trigEff_pt_jet1__7->GetXaxis()->SetTitleOffset(1);
   _trigEff_pt_jet1__7->GetXaxis()->SetTitleFont(42);
   _trigEff_pt_jet1__7->GetYaxis()->SetTitle("Efficiency");
   _trigEff_pt_jet1__7->GetYaxis()->SetLabelFont(42);
   _trigEff_pt_jet1__7->GetYaxis()->SetTitleFont(42);
   _trigEff_pt_jet1__7->GetZaxis()->SetLabelFont(42);
   _trigEff_pt_jet1__7->GetZaxis()->SetTitleOffset(1);
   _trigEff_pt_jet1__7->GetZaxis()->SetTitleFont(42);
   _trigEff_pt_jet1__7->Draw("HIST");
   pt_jet1_2017_trigEff_17->Modified();
   pt_jet1_2017_trigEff_17->cd();
   pt_jet1_2017_trigEff_17->SetSelected(pt_jet1_2017_trigEff_17);
}
