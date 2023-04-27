#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_DoubleJet_DoubleTag_16()
{
//=========Macro generated from canvas: pt_jet2_2016_DoubleJet_DoubleTag_16/pt_jet2_2016_DoubleJet_DoubleTag_16
//=========  (Wed Apr 26 16:41:41 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_DoubleJet_DoubleTag_16 = new TCanvas("pt_jet2_2016_DoubleJet_DoubleTag_16", "pt_jet2_2016_DoubleJet_DoubleTag_16",0,0,600,600);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetHighLightColor(2);
   pt_jet2_2016_DoubleJet_DoubleTag_16->Range(-109.1764,-0.01076923,585.8166,0.07897436);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetFillColor(0);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetFillStyle(4000);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetBorderMode(0);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetBorderSize(2);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetLeftMargin(0.15709);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetRightMargin(0.1234783);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetBottomMargin(0.12);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetFrameFillStyle(1000);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetFrameFillStyle(1000);
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_pt_jet2__34 = new TH1D("_DoubleJet_DoubleTag_pt_jet2__34","",50,0,500);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(5,0.001625752);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(6,0.002413064);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(7,0.004510685);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(8,0.006707861);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(9,0.01035909);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(10,0.01302498);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(11,0.01479858);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(12,0.0136946);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(13,0.01356795);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(14,0.0127452);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(15,0.01576891);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(16,0.01599265);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(17,0.01464277);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(18,0.009754457);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(19,0.01643836);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(20,0.01606922);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(21,0.01409554);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(22,0.01292247);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(23,0.01227831);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(24,0.01572327);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(25,0.01091703);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(26,0.006024096);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(27,0.02258065);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(28,0.01587302);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(29,0.02777778);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(30,0.01685393);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(33,0.03960396);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(35,0.01612903);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(36,0.06666667);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(37,0.04651163);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(38,0.03448276);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(40,0.04347826);
   _DoubleJet_DoubleTag_pt_jet2__34->SetEntries(0.5840325);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  262.8");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  100.2");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_pt_jet2__34->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_pt_jet2__34);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_DoubleTag_pt_jet2__34->SetLineColor(ci);
   _DoubleJet_DoubleTag_pt_jet2__34->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _DoubleJet_DoubleTag_pt_jet2__34->GetXaxis()->SetRange(1,500);
   _DoubleJet_DoubleTag_pt_jet2__34->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_pt_jet2__34->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_pt_jet2__34->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_pt_jet2__34->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_DoubleTag_pt_jet2__34->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_pt_jet2__34->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_pt_jet2__34->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_pt_jet2__34->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_pt_jet2__34->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_pt_jet2__34->Draw("HIST");
   pt_jet2_2016_DoubleJet_DoubleTag_16->Modified();
   pt_jet2_2016_DoubleJet_DoubleTag_16->cd();
   pt_jet2_2016_DoubleJet_DoubleTag_16->SetSelected(pt_jet2_2016_DoubleJet_DoubleTag_16);
}
