#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet1_2016_DoubleJet_DoubleTag_16_tagged()
{
//=========Macro generated from canvas: pt_jet1_2016_DoubleJet_DoubleTag_16_tagged/pt_jet1_2016_DoubleJet_DoubleTag_16_tagged
//=========  (Tue Apr 25 23:03:07 2023) by ROOT version 6.26/06
   TCanvas *pt_jet1_2016_DoubleJet_DoubleTag_16_tagged = new TCanvas("pt_jet1_2016_DoubleJet_DoubleTag_16_tagged", "pt_jet1_2016_DoubleJet_DoubleTag_16_tagged",0,0,600,600);
   pt_jet1_2016_DoubleJet_DoubleTag_16_tagged->SetHighLightColor(2);
   pt_jet1_2016_DoubleJet_DoubleTag_16_tagged->Range(-109.1764,-0.008502024,585.8166,0.06234818);
   pt_jet1_2016_DoubleJet_DoubleTag_16_tagged->SetFillColor(0);
   pt_jet1_2016_DoubleJet_DoubleTag_16_tagged->SetFillStyle(4000);
   pt_jet1_2016_DoubleJet_DoubleTag_16_tagged->SetBorderMode(0);
   pt_jet1_2016_DoubleJet_DoubleTag_16_tagged->SetBorderSize(2);
   pt_jet1_2016_DoubleJet_DoubleTag_16_tagged->SetLeftMargin(0.15709);
   pt_jet1_2016_DoubleJet_DoubleTag_16_tagged->SetRightMargin(0.1234783);
   pt_jet1_2016_DoubleJet_DoubleTag_16_tagged->SetBottomMargin(0.12);
   pt_jet1_2016_DoubleJet_DoubleTag_16_tagged->SetFrameFillStyle(1000);
   pt_jet1_2016_DoubleJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   pt_jet1_2016_DoubleJet_DoubleTag_16_tagged->SetFrameFillStyle(1000);
   pt_jet1_2016_DoubleJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_tagged_pt_jet1__130 = new TH1D("_DoubleJet_DoubleTag_tagged_pt_jet1__130","",50,0,500);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->SetBinContent(8,0.001895735);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->SetBinContent(9,0.006357279);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->SetBinContent(10,0.01428571);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->SetBinContent(11,0.02816901);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->SetBinContent(12,0.02597403);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->SetBinContent(13,0.0284153);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->SetBinContent(14,0.02580645);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->SetBinContent(15,0.0253651);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->SetBinContent(16,0.01518027);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->SetBinContent(17,0.0310702);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->SetBinContent(18,0.02186589);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->SetBinContent(19,0.02047782);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->SetBinContent(20,0.02195609);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->SetBinContent(21,0.02968037);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->SetBinContent(22,0.03939394);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->SetBinContent(23,0.02721088);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->SetBinContent(24,0.02834008);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->SetBinContent(25,0.04040404);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->SetBinContent(26,0.00617284);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->SetBinContent(27,0.0141844);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->SetBinContent(28,0.01941748);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->SetBinContent(29,0.02777778);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->SetBinContent(30,0.03125);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->SetBinContent(31,0.02597403);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->SetBinContent(32,0.03174603);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->SetBinContent(33,0.03703704);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->SetBinContent(34,0.04166667);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->SetBinContent(35,0.02380952);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->SetBinContent(36,0.03030303);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->SetBinContent(40,0.04166667);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->SetBinContent(42,0.05263158);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->SetBinContent(45,0.03846154);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->SetBinContent(51,0.01149425);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->SetEntries(0.8539468);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_tagged_pt_jet1");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  259.3");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  100.1");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_tagged_pt_jet1__130);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->SetLineColor(ci);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->GetXaxis()->SetTitle("Subleading jet p_{T} [GeV]");
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->GetXaxis()->SetRange(1,500);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->GetYaxis()->SetTitle("Efficiency");
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet1__130->Draw("HIST");
   pt_jet1_2016_DoubleJet_DoubleTag_16_tagged->Modified();
   pt_jet1_2016_DoubleJet_DoubleTag_16_tagged->cd();
   pt_jet1_2016_DoubleJet_DoubleTag_16_tagged->SetSelected(pt_jet1_2016_DoubleJet_DoubleTag_16_tagged);
}
