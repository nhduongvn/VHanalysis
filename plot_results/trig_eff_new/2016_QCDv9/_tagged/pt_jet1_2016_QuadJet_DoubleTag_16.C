#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2016_QuadJet_DoubleTag_16()
{
//=========Macro generated from canvas: pt_jet1_2016_QuadJet_DoubleTag_16/pt_jet1_2016_QuadJet_DoubleTag_16
//=========  (Mon Apr 24 10:39:18 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2016_QuadJet_DoubleTag_16 = new TCanvas("pt_jet1_2016_QuadJet_DoubleTag_16", "pt_jet1_2016_QuadJet_DoubleTag_16",0,0,600,600);
   pt_jet1_2016_QuadJet_DoubleTag_16->SetHighLightColor(2);
   pt_jet1_2016_QuadJet_DoubleTag_16->Range(-109.1764,-0.02019231,585.8166,0.1480769);
   pt_jet1_2016_QuadJet_DoubleTag_16->SetFillColor(0);
   pt_jet1_2016_QuadJet_DoubleTag_16->SetFillStyle(4000);
   pt_jet1_2016_QuadJet_DoubleTag_16->SetBorderMode(0);
   pt_jet1_2016_QuadJet_DoubleTag_16->SetBorderSize(2);
   pt_jet1_2016_QuadJet_DoubleTag_16->SetLeftMargin(0.15709);
   pt_jet1_2016_QuadJet_DoubleTag_16->SetRightMargin(0.1234783);
   pt_jet1_2016_QuadJet_DoubleTag_16->SetBottomMargin(0.12);
   pt_jet1_2016_QuadJet_DoubleTag_16->SetFrameFillStyle(1000);
   pt_jet1_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   pt_jet1_2016_QuadJet_DoubleTag_16->SetFrameFillStyle(1000);
   pt_jet1_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_tagged_pt_jet1__244 = new TH1D("_QuadJet_DoubleTag_tagged_pt_jet1__244","",50,0,500);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->SetBinContent(6,0.009760426);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->SetBinContent(7,0.01786439);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->SetBinContent(8,0.0192733);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->SetBinContent(9,0.02129688);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->SetBinContent(10,0.02682927);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->SetBinContent(11,0.02664636);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->SetBinContent(12,0.02821317);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->SetBinContent(13,0.03060109);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->SetBinContent(14,0.02645161);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->SetBinContent(15,0.0253651);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->SetBinContent(16,0.03225806);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->SetBinContent(17,0.0287687);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->SetBinContent(18,0.03061224);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->SetBinContent(19,0.01877133);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->SetBinContent(20,0.02195609);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->SetBinContent(21,0.03424658);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->SetBinContent(22,0.03636364);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->SetBinContent(23,0.04421769);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->SetBinContent(24,0.0242915);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->SetBinContent(25,0.01515152);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->SetBinContent(26,0.01851852);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->SetBinContent(27,0.0212766);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->SetBinContent(28,0.02912621);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->SetBinContent(29,0.01851852);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->SetBinContent(30,0.01041667);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->SetBinContent(32,0.01587302);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->SetBinContent(34,0.08333333);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->SetBinContent(35,0.02380952);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->SetBinContent(37,0.02777778);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->SetBinContent(38,0.03571429);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->SetBinContent(42,0.05263158);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->SetBinContent(44,0.125);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->SetBinContent(45,0.03846154);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->SetBinContent(51,0.03448276);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->SetEntries(1.019397);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_tagged_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  261.3");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  120.7");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_tagged_pt_jet1__244->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_tagged_pt_jet1__244);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_DoubleTag_tagged_pt_jet1__244->SetLineColor(ci);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _QuadJet_DoubleTag_tagged_pt_jet1__244->GetXaxis()->SetRange(1,500);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_DoubleTag_tagged_pt_jet1__244->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet1__244->Draw("HIST");
   pt_jet1_2016_QuadJet_DoubleTag_16->Modified();
   pt_jet1_2016_QuadJet_DoubleTag_16->cd();
   pt_jet1_2016_QuadJet_DoubleTag_16->SetSelected(pt_jet1_2016_QuadJet_DoubleTag_16);
}
