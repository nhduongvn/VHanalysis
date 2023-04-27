#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2016_DoubleJet_DoubleTag_16_ideal_logY()
{
//=========Macro generated from canvas: pt_jet0_2016_DoubleJet_DoubleTag_16_ideal/pt_jet0_2016_DoubleJet_DoubleTag_16_ideal
//=========  (Thu Apr 27 10:19:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2016_DoubleJet_DoubleTag_16_ideal = new TCanvas("pt_jet0_2016_DoubleJet_DoubleTag_16_ideal", "pt_jet0_2016_DoubleJet_DoubleTag_16_ideal",0,0,600,600);
   pt_jet0_2016_DoubleJet_DoubleTag_16_ideal->SetHighLightColor(2);
   pt_jet0_2016_DoubleJet_DoubleTag_16_ideal->Range(-100,-0.4486099,566.6667,1.027189);
   pt_jet0_2016_DoubleJet_DoubleTag_16_ideal->SetFillColor(0);
   pt_jet0_2016_DoubleJet_DoubleTag_16_ideal->SetBorderMode(0);
   pt_jet0_2016_DoubleJet_DoubleTag_16_ideal->SetBorderSize(2);
   pt_jet0_2016_DoubleJet_DoubleTag_16_ideal->SetLogy();
   pt_jet0_2016_DoubleJet_DoubleTag_16_ideal->SetLeftMargin(0.15);
   pt_jet0_2016_DoubleJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet0_2016_DoubleJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_ideal_pt_jet0__227 = new TH1D("_DoubleJet_DoubleTag_ideal_pt_jet0__227","",50,0,500);
   _DoubleJet_DoubleTag_ideal_pt_jet0__227->SetBinContent(13,4);
   _DoubleJet_DoubleTag_ideal_pt_jet0__227->SetBinContent(14,1);
   _DoubleJet_DoubleTag_ideal_pt_jet0__227->SetBinContent(15,3);
   _DoubleJet_DoubleTag_ideal_pt_jet0__227->SetBinContent(16,2);
   _DoubleJet_DoubleTag_ideal_pt_jet0__227->SetBinContent(17,1);
   _DoubleJet_DoubleTag_ideal_pt_jet0__227->SetBinContent(19,1);
   _DoubleJet_DoubleTag_ideal_pt_jet0__227->SetBinContent(20,4);
   _DoubleJet_DoubleTag_ideal_pt_jet0__227->SetBinContent(21,1);
   _DoubleJet_DoubleTag_ideal_pt_jet0__227->SetBinContent(22,3);
   _DoubleJet_DoubleTag_ideal_pt_jet0__227->SetBinContent(24,2);
   _DoubleJet_DoubleTag_ideal_pt_jet0__227->SetBinContent(26,1);
   _DoubleJet_DoubleTag_ideal_pt_jet0__227->SetBinContent(27,1);
   _DoubleJet_DoubleTag_ideal_pt_jet0__227->SetBinContent(28,1);
   _DoubleJet_DoubleTag_ideal_pt_jet0__227->SetBinContent(38,1);
   _DoubleJet_DoubleTag_ideal_pt_jet0__227->SetBinContent(39,2);
   _DoubleJet_DoubleTag_ideal_pt_jet0__227->SetEntries(28);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_ideal_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 28     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  206.4");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  73.75");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_ideal_pt_jet0__227->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_ideal_pt_jet0__227);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_ideal_pt_jet0__227->SetLineColor(ci);
   _DoubleJet_DoubleTag_ideal_pt_jet0__227->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _DoubleJet_DoubleTag_ideal_pt_jet0__227->GetXaxis()->SetRange(1,50);
   _DoubleJet_DoubleTag_ideal_pt_jet0__227->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet0__227->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_pt_jet0__227->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet0__227->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_ideal_pt_jet0__227->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet0__227->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet0__227->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet0__227->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_ideal_pt_jet0__227->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_ideal_pt_jet0__227->Draw("HIST");
   pt_jet0_2016_DoubleJet_DoubleTag_16_ideal->Modified();
   pt_jet0_2016_DoubleJet_DoubleTag_16_ideal->cd();
   pt_jet0_2016_DoubleJet_DoubleTag_16_ideal->SetSelected(pt_jet0_2016_DoubleJet_DoubleTag_16_ideal);
}
