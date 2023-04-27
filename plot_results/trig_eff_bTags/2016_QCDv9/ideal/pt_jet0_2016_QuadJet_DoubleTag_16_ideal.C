#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2016_QuadJet_DoubleTag_16_ideal()
{
//=========Macro generated from canvas: pt_jet0_2016_QuadJet_DoubleTag_16_ideal/pt_jet0_2016_QuadJet_DoubleTag_16_ideal
//=========  (Thu Apr 27 10:19:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2016_QuadJet_DoubleTag_16_ideal = new TCanvas("pt_jet0_2016_QuadJet_DoubleTag_16_ideal", "pt_jet0_2016_QuadJet_DoubleTag_16_ideal",0,0,600,600);
   pt_jet0_2016_QuadJet_DoubleTag_16_ideal->SetHighLightColor(2);
   pt_jet0_2016_QuadJet_DoubleTag_16_ideal->Range(-109.1764,-0.02019231,585.8166,0.1480769);
   pt_jet0_2016_QuadJet_DoubleTag_16_ideal->SetFillColor(0);
   pt_jet0_2016_QuadJet_DoubleTag_16_ideal->SetFillStyle(4000);
   pt_jet0_2016_QuadJet_DoubleTag_16_ideal->SetBorderMode(0);
   pt_jet0_2016_QuadJet_DoubleTag_16_ideal->SetBorderSize(2);
   pt_jet0_2016_QuadJet_DoubleTag_16_ideal->SetLeftMargin(0.15709);
   pt_jet0_2016_QuadJet_DoubleTag_16_ideal->SetRightMargin(0.1234783);
   pt_jet0_2016_QuadJet_DoubleTag_16_ideal->SetBottomMargin(0.12);
   pt_jet0_2016_QuadJet_DoubleTag_16_ideal->SetFrameFillStyle(1000);
   pt_jet0_2016_QuadJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet0_2016_QuadJet_DoubleTag_16_ideal->SetFrameFillStyle(1000);
   pt_jet0_2016_QuadJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_ideal_pt_jet0__220 = new TH1D("_QuadJet_DoubleTag_ideal_pt_jet0__220","",50,0,500);
   _QuadJet_DoubleTag_ideal_pt_jet0__220->SetBinContent(8,0.03703704);
   _QuadJet_DoubleTag_ideal_pt_jet0__220->SetBinContent(11,0.05660377);
   _QuadJet_DoubleTag_ideal_pt_jet0__220->SetBinContent(12,0.04166667);
   _QuadJet_DoubleTag_ideal_pt_jet0__220->SetBinContent(13,0.05882353);
   _QuadJet_DoubleTag_ideal_pt_jet0__220->SetBinContent(14,0.025);
   _QuadJet_DoubleTag_ideal_pt_jet0__220->SetBinContent(15,0.03125);
   _QuadJet_DoubleTag_ideal_pt_jet0__220->SetBinContent(16,0.0212766);
   _QuadJet_DoubleTag_ideal_pt_jet0__220->SetBinContent(20,0.02631579);
   _QuadJet_DoubleTag_ideal_pt_jet0__220->SetBinContent(21,0.1071429);
   _QuadJet_DoubleTag_ideal_pt_jet0__220->SetBinContent(22,0.03225806);
   _QuadJet_DoubleTag_ideal_pt_jet0__220->SetBinContent(23,0.03448276);
   _QuadJet_DoubleTag_ideal_pt_jet0__220->SetBinContent(24,0.06666667);
   _QuadJet_DoubleTag_ideal_pt_jet0__220->SetBinContent(30,0.07692308);
   _QuadJet_DoubleTag_ideal_pt_jet0__220->SetBinContent(33,0.125);
   _QuadJet_DoubleTag_ideal_pt_jet0__220->SetBinContent(51,0.03448276);
   _QuadJet_DoubleTag_ideal_pt_jet0__220->SetEntries(0.7404468);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_ideal_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 1      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  206.4");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  79.63");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_ideal_pt_jet0__220->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_ideal_pt_jet0__220);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_DoubleTag_ideal_pt_jet0__220->SetLineColor(ci);
   _QuadJet_DoubleTag_ideal_pt_jet0__220->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_DoubleTag_ideal_pt_jet0__220->GetXaxis()->SetRange(1,500);
   _QuadJet_DoubleTag_ideal_pt_jet0__220->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet0__220->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_ideal_pt_jet0__220->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet0__220->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_DoubleTag_ideal_pt_jet0__220->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet0__220->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet0__220->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet0__220->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_ideal_pt_jet0__220->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet0__220->Draw("HIST");
   pt_jet0_2016_QuadJet_DoubleTag_16_ideal->Modified();
   pt_jet0_2016_QuadJet_DoubleTag_16_ideal->cd();
   pt_jet0_2016_QuadJet_DoubleTag_16_ideal->SetSelected(pt_jet0_2016_QuadJet_DoubleTag_16_ideal);
}
