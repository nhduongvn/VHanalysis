#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2017_QuadJet_noTag_17_tagged_logY()
{
//=========Macro generated from canvas: pt_jet0_2017_QuadJet_noTag_17_tagged/pt_jet0_2017_QuadJet_noTag_17_tagged
//=========  (Wed Apr 26 16:41:50 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2017_QuadJet_noTag_17_tagged = new TCanvas("pt_jet0_2017_QuadJet_noTag_17_tagged", "pt_jet0_2017_QuadJet_noTag_17_tagged",0,0,600,600);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetHighLightColor(2);
   pt_jet0_2017_QuadJet_noTag_17_tagged->Range(-100,-0.5035265,566.6667,1.521438);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetFillColor(0);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetBorderMode(0);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetBorderSize(2);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetLogy();
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetLeftMargin(0.15);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetFrameBorderMode(0);
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_pt_jet0__59 = new TH1D("_QuadJet_noTag_tagged_pt_jet0__59","",50,0,500);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(8,1);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(9,2);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(10,5);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(11,6);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(12,10);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(13,10);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(14,9);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(15,11);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(16,4);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(17,10);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(18,7);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(19,5);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(20,6);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(21,11);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(22,3);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(23,3);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(24,4);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(25,4);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(26,3);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(27,2);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(28,6);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(29,1);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(30,1);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(31,2);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(32,1);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(33,3);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(34,1);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(36,1);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(38,2);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(39,1);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(41,1);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(42,2);
   _QuadJet_noTag_tagged_pt_jet0__59->SetBinContent(51,1);
   _QuadJet_noTag_tagged_pt_jet0__59->SetEntries(139);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_tagged_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 139    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  189.3");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  76.79");
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
   pt_jet0_2017_QuadJet_noTag_17_tagged->Modified();
   pt_jet0_2017_QuadJet_noTag_17_tagged->cd();
   pt_jet0_2017_QuadJet_noTag_17_tagged->SetSelected(pt_jet0_2017_QuadJet_noTag_17_tagged);
}
