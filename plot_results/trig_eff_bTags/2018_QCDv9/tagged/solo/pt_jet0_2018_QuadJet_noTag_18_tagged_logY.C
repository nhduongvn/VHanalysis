#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2018_QuadJet_noTag_18_tagged_logY()
{
//=========Macro generated from canvas: pt_jet0_2018_QuadJet_noTag_18_tagged/pt_jet0_2018_QuadJet_noTag_18_tagged
//=========  (Thu Apr 27 10:20:00 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2018_QuadJet_noTag_18_tagged = new TCanvas("pt_jet0_2018_QuadJet_noTag_18_tagged", "pt_jet0_2018_QuadJet_noTag_18_tagged",0,0,600,600);
   pt_jet0_2018_QuadJet_noTag_18_tagged->SetHighLightColor(2);
   pt_jet0_2018_QuadJet_noTag_18_tagged->Range(-100,-3.748352,566.6667,0.7248713);
   pt_jet0_2018_QuadJet_noTag_18_tagged->SetFillColor(0);
   pt_jet0_2018_QuadJet_noTag_18_tagged->SetBorderMode(0);
   pt_jet0_2018_QuadJet_noTag_18_tagged->SetBorderSize(2);
   pt_jet0_2018_QuadJet_noTag_18_tagged->SetLogy();
   pt_jet0_2018_QuadJet_noTag_18_tagged->SetLeftMargin(0.15);
   pt_jet0_2018_QuadJet_noTag_18_tagged->SetFrameBorderMode(0);
   pt_jet0_2018_QuadJet_noTag_18_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_pt_jet0__59 = new TH1D("_QuadJet_noTag_tagged_pt_jet0__59","",50,0,500);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(11,1);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(18,1);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(22,1);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(23,1);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(25,1);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(27,1);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(34,1);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(46,1);
   _QuadJet_noTag_tagged_pt_jet0__59->SetEntries(8);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_tagged_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 8      ");
   ptstats_LaTex = ptstats->AddText("Mean  =  251.3");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  99.29");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_pt_jet0__59->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_pt_jet0__59);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_tagged_pt_jet0__59->SetLineColor(ci);
   _QuadJet_noTag_tagged_pt_jet0__59->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_noTag_tagged_pt_jet0__59->GetXaxis()->SetRange(1,50);
   _QuadJet_noTag_tagged_pt_jet0__59->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet0__59->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet0__59->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet0__59->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_tagged_pt_jet0__59->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet0__59->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet0__59->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_pt_jet0__59->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_pt_jet0__59->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_pt_jet0__59->Draw("HIST");
   pt_jet0_2018_QuadJet_noTag_18_tagged->Modified();
   pt_jet0_2018_QuadJet_noTag_18_tagged->cd();
   pt_jet0_2018_QuadJet_noTag_18_tagged->SetSelected(pt_jet0_2018_QuadJet_noTag_18_tagged);
}
