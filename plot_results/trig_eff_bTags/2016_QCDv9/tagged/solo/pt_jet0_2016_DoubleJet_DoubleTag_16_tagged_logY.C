#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2016_DoubleJet_DoubleTag_16_tagged_logY()
{
//=========Macro generated from canvas: pt_jet0_2016_DoubleJet_DoubleTag_16_tagged/pt_jet0_2016_DoubleJet_DoubleTag_16_tagged
//=========  (Thu Apr 27 10:19:45 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2016_DoubleJet_DoubleTag_16_tagged = new TCanvas("pt_jet0_2016_DoubleJet_DoubleTag_16_tagged", "pt_jet0_2016_DoubleJet_DoubleTag_16_tagged",0,0,600,600);
   pt_jet0_2016_DoubleJet_DoubleTag_16_tagged->SetHighLightColor(2);
   pt_jet0_2016_DoubleJet_DoubleTag_16_tagged->Range(-100,-0.4486099,566.6667,1.027189);
   pt_jet0_2016_DoubleJet_DoubleTag_16_tagged->SetFillColor(0);
   pt_jet0_2016_DoubleJet_DoubleTag_16_tagged->SetBorderMode(0);
   pt_jet0_2016_DoubleJet_DoubleTag_16_tagged->SetBorderSize(2);
   pt_jet0_2016_DoubleJet_DoubleTag_16_tagged->SetLogy();
   pt_jet0_2016_DoubleJet_DoubleTag_16_tagged->SetLeftMargin(0.15);
   pt_jet0_2016_DoubleJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   pt_jet0_2016_DoubleJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_DoubleJet_DoubleTag_tagged_pt_jet0__119 = new TH1D("_DoubleJet_DoubleTag_tagged_pt_jet0__119","",50,0,500);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(13,4);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(14,1);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(15,3);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(16,2);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(17,1);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(19,1);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(20,4);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(21,1);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(22,3);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(24,2);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(26,1);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(27,1);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(28,1);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(38,1);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetBinContent(39,2);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetEntries(28);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_DoubleJet_DoubleTag_tagged_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 28     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  206.4");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  73.75");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_DoubleJet_DoubleTag_tagged_pt_jet0__119);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->SetLineColor(ci);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->GetXaxis()->SetRange(1,50);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->GetXaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->GetXaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->GetXaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->GetYaxis()->SetTitle("Events");
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->GetYaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->GetYaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->GetZaxis()->SetLabelFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->GetZaxis()->SetTitleOffset(1);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->GetZaxis()->SetTitleFont(42);
   _DoubleJet_DoubleTag_tagged_pt_jet0__119->Draw("HIST");
   pt_jet0_2016_DoubleJet_DoubleTag_16_tagged->Modified();
   pt_jet0_2016_DoubleJet_DoubleTag_16_tagged->cd();
   pt_jet0_2016_DoubleJet_DoubleTag_16_tagged->SetSelected(pt_jet0_2016_DoubleJet_DoubleTag_16_tagged);
}
