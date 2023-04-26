#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2017_QuadJet_noTag_17_tagged_logY()
{
//=========Macro generated from canvas: CvL_2017_QuadJet_noTag_17_tagged/CvL_2017_QuadJet_noTag_17_tagged
//=========  (Wed Apr 26 16:41:50 2023) by ROOT version 6.26/06
   TCanvas *CvL_2017_QuadJet_noTag_17_tagged = new TCanvas("CvL_2017_QuadJet_noTag_17_tagged", "CvL_2017_QuadJet_noTag_17_tagged",0,0,600,600);
   CvL_2017_QuadJet_noTag_17_tagged->SetHighLightColor(2);
   CvL_2017_QuadJet_noTag_17_tagged->Range(-0.2,0.823614,1.133333,2.587474);
   CvL_2017_QuadJet_noTag_17_tagged->SetFillColor(0);
   CvL_2017_QuadJet_noTag_17_tagged->SetBorderMode(0);
   CvL_2017_QuadJet_noTag_17_tagged->SetBorderSize(2);
   CvL_2017_QuadJet_noTag_17_tagged->SetLogy();
   CvL_2017_QuadJet_noTag_17_tagged->SetLeftMargin(0.15);
   CvL_2017_QuadJet_noTag_17_tagged->SetFrameBorderMode(0);
   CvL_2017_QuadJet_noTag_17_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_noTag_tagged_CvL__101 = new TH1D("_QuadJet_noTag_tagged_CvL__101","",10,0,1);
   _QuadJet_noTag_tagged_CvL__101->SetBinContent(1,85);
   _QuadJet_noTag_tagged_CvL__101->SetBinContent(2,136);
   _QuadJet_noTag_tagged_CvL__101->SetBinContent(3,51);
   _QuadJet_noTag_tagged_CvL__101->SetBinContent(4,22);
   _QuadJet_noTag_tagged_CvL__101->SetBinContent(5,20);
   _QuadJet_noTag_tagged_CvL__101->SetBinContent(6,26);
   _QuadJet_noTag_tagged_CvL__101->SetBinContent(7,22);
   _QuadJet_noTag_tagged_CvL__101->SetBinContent(8,36);
   _QuadJet_noTag_tagged_CvL__101->SetBinContent(9,51);
   _QuadJet_noTag_tagged_CvL__101->SetBinContent(10,107);
   _QuadJet_noTag_tagged_CvL__101->SetEntries(556);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_noTag_tagged_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 556    ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4602");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.357");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_noTag_tagged_CvL__101->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_noTag_tagged_CvL__101);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_noTag_tagged_CvL__101->SetLineColor(ci);
   _QuadJet_noTag_tagged_CvL__101->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_noTag_tagged_CvL__101->GetXaxis()->SetRange(1,10);
   _QuadJet_noTag_tagged_CvL__101->GetXaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvL__101->GetXaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_CvL__101->GetXaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvL__101->GetYaxis()->SetTitle("Events");
   _QuadJet_noTag_tagged_CvL__101->GetYaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvL__101->GetYaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvL__101->GetZaxis()->SetLabelFont(42);
   _QuadJet_noTag_tagged_CvL__101->GetZaxis()->SetTitleOffset(1);
   _QuadJet_noTag_tagged_CvL__101->GetZaxis()->SetTitleFont(42);
   _QuadJet_noTag_tagged_CvL__101->Draw("HIST");
   CvL_2017_QuadJet_noTag_17_tagged->Modified();
   CvL_2017_QuadJet_noTag_17_tagged->cd();
   CvL_2017_QuadJet_noTag_17_tagged->SetSelected(CvL_2017_QuadJet_noTag_17_tagged);
}
