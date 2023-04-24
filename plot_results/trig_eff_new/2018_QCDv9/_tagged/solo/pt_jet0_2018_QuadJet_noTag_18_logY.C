#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2018_QuadJet_noTag_18_logY()
{
//=========Macro generated from canvas: pt_jet0_2018_QuadJet_noTag_18/pt_jet0_2018_QuadJet_noTag_18
//=========  (Mon Apr 24 10:45:56 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2018_QuadJet_noTag_18 = new TCanvas("pt_jet0_2018_QuadJet_noTag_18", "pt_jet0_2018_QuadJet_noTag_18",0,0,600,600);
   pt_jet0_2018_QuadJet_noTag_18->SetHighLightColor(2);
   pt_jet0_2018_QuadJet_noTag_18->Range(-100,-0.5359811,566.6667,1.81353);
   pt_jet0_2018_QuadJet_noTag_18->SetFillColor(0);
   pt_jet0_2018_QuadJet_noTag_18->SetBorderMode(0);
   pt_jet0_2018_QuadJet_noTag_18->SetBorderSize(2);
   pt_jet0_2018_QuadJet_noTag_18->SetLogy();
   pt_jet0_2018_QuadJet_noTag_18->SetLeftMargin(0.15);
   pt_jet0_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   pt_jet0_2018_QuadJet_noTag_18->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_pt_jet0__59 = new TH1D("_QuadJet_noTag_tagged_pt_jet0__59","",50,0,500);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(9,3);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(10,4);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(11,9);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(12,6);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(13,19);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(14,18);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(15,17);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(16,17);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(17,20);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(18,13);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(19,7);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(20,9);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(21,3);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(22,8);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(23,10);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(24,10);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(25,5);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(26,7);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(27,4);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(28,6);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(29,10);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(30,5);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(31,1);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(32,1);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(33,4);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(34,6);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(35,1);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(36,2);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(37,2);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(38,2);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(39,1);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(40,2);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(41,3);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(42,4);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(44,1);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(46,2);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(48,1);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(49,1);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(51,9);
   _QuadJet_noTag_tagged_pt_jet0__59->SetEntries(253);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2018_QuadJet_noTag_tagged_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 253    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  207.1");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  87.52");
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
   pt_jet0_2018_QuadJet_noTag_18->Modified();
   pt_jet0_2018_QuadJet_noTag_18->cd();
   pt_jet0_2018_QuadJet_noTag_18->SetSelected(pt_jet0_2018_QuadJet_noTag_18);
}
