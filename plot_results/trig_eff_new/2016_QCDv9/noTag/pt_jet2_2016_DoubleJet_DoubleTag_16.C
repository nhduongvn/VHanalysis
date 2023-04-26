#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_DoubleJet_DoubleTag_16()
{
//=========Macro generated from canvas: pt_jet2_2016_DoubleJet_DoubleTag_16/pt_jet2_2016_DoubleJet_DoubleTag_16
//=========  (Tue Apr 25 23:03:06 2023) by ROOT version 6.26/06
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
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(5,0.00161414);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(6,0.002439556);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(7,0.004533713);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(8,0.006745717);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(9,0.01040537);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(10,0.01314392);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(11,0.01473297);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(12,0.01369997);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(13,0.01362073);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(14,0.01274956);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(15,0.01566182);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(16,0.01606426);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(17,0.01434323);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(18,0.009711989);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(19,0.0163562);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(20,0.01594114);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(21,0.01401869);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(22,0.01292247);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(23,0.01356852);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(24,0.015625);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(25,0.01082251);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(26,0.006042296);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(27,0.02258065);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(28,0.01587302);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(29,0.02752294);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(30,0.01685393);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(33,0.03960396);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(35,0.015625);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(36,0.06666667);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(37,0.04545455);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(38,0.03125);
   _DoubleJet_DoubleTag_pt_jet2__34->SetBinContent(40,0.04166667);
   _DoubleJet_DoubleTag_pt_jet2__34->SetEntries(0.5778611);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  261.4");
   ptstats_LaTex = ptstats->AddText("Std Dev   =    100");
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
