#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2016_QuadJet_DoubleTag_16_tagged_logY()
{
//=========Macro generated from canvas: pt_jet0_2016_QuadJet_DoubleTag_16_tagged/pt_jet0_2016_QuadJet_DoubleTag_16_tagged
//=========  (Thu Apr 27 10:19:45 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2016_QuadJet_DoubleTag_16_tagged = new TCanvas("pt_jet0_2016_QuadJet_DoubleTag_16_tagged", "pt_jet0_2016_QuadJet_DoubleTag_16_tagged",0,0,600,600);
   pt_jet0_2016_QuadJet_DoubleTag_16_tagged->SetHighLightColor(2);
   pt_jet0_2016_QuadJet_DoubleTag_16_tagged->Range(-100,-0.4486099,566.6667,1.027189);
   pt_jet0_2016_QuadJet_DoubleTag_16_tagged->SetFillColor(0);
   pt_jet0_2016_QuadJet_DoubleTag_16_tagged->SetBorderMode(0);
   pt_jet0_2016_QuadJet_DoubleTag_16_tagged->SetBorderSize(2);
   pt_jet0_2016_QuadJet_DoubleTag_16_tagged->SetLogy();
   pt_jet0_2016_QuadJet_DoubleTag_16_tagged->SetLeftMargin(0.15);
   pt_jet0_2016_QuadJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   pt_jet0_2016_QuadJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_tagged_pt_jet0__113 = new TH1D("_QuadJet_DoubleTag_tagged_pt_jet0__113","",50,0,500);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(8,1);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(11,3);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(12,2);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(13,4);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(14,1);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(15,2);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(16,1);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(20,1);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(21,3);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(22,1);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(23,1);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(24,2);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(30,1);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(33,1);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetBinContent(51,1);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetEntries(25);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_tagged_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 25     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  167.4");
   ptstats_LaTex = ptstats->AddText("Std Dev   =   62.8");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_tagged_pt_jet0__113->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_tagged_pt_jet0__113);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_tagged_pt_jet0__113->SetLineColor(ci);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_DoubleTag_tagged_pt_jet0__113->GetXaxis()->SetRange(1,50);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_tagged_pt_jet0__113->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet0__113->Draw("HIST");
   pt_jet0_2016_QuadJet_DoubleTag_16_tagged->Modified();
   pt_jet0_2016_QuadJet_DoubleTag_16_tagged->cd();
   pt_jet0_2016_QuadJet_DoubleTag_16_tagged->SetSelected(pt_jet0_2016_QuadJet_DoubleTag_16_tagged);
}
