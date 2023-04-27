#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2016_QuadJet_DoubleTag_16_ideal_logY()
{
//=========Macro generated from canvas: pt_jet0_2016_QuadJet_DoubleTag_16_ideal/pt_jet0_2016_QuadJet_DoubleTag_16_ideal
//=========  (Thu Apr 27 10:19:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2016_QuadJet_DoubleTag_16_ideal = new TCanvas("pt_jet0_2016_QuadJet_DoubleTag_16_ideal", "pt_jet0_2016_QuadJet_DoubleTag_16_ideal",0,0,600,600);
   pt_jet0_2016_QuadJet_DoubleTag_16_ideal->SetHighLightColor(2);
   pt_jet0_2016_QuadJet_DoubleTag_16_ideal->Range(-100,-0.4486099,566.6667,1.027189);
   pt_jet0_2016_QuadJet_DoubleTag_16_ideal->SetFillColor(0);
   pt_jet0_2016_QuadJet_DoubleTag_16_ideal->SetBorderMode(0);
   pt_jet0_2016_QuadJet_DoubleTag_16_ideal->SetBorderSize(2);
   pt_jet0_2016_QuadJet_DoubleTag_16_ideal->SetLogy();
   pt_jet0_2016_QuadJet_DoubleTag_16_ideal->SetLeftMargin(0.15);
   pt_jet0_2016_QuadJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet0_2016_QuadJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_ideal_pt_jet0__221 = new TH1D("_QuadJet_DoubleTag_ideal_pt_jet0__221","",50,0,500);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(8,1);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(11,3);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(12,2);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(13,4);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(14,1);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(15,2);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(16,1);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(20,1);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(21,3);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(22,1);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(23,1);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(24,2);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(30,1);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(33,1);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetBinContent(51,1);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetEntries(25);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_ideal_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 25     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  167.4");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   62.8");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_ideal_pt_jet0__221->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_ideal_pt_jet0__221);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_ideal_pt_jet0__221->SetLineColor(ci);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_DoubleTag_ideal_pt_jet0__221->GetXaxis()->SetRange(1,50);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_ideal_pt_jet0__221->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet0__221->Draw("HIST");
   pt_jet0_2016_QuadJet_DoubleTag_16_ideal->Modified();
   pt_jet0_2016_QuadJet_DoubleTag_16_ideal->cd();
   pt_jet0_2016_QuadJet_DoubleTag_16_ideal->SetSelected(pt_jet0_2016_QuadJet_DoubleTag_16_ideal);
}
