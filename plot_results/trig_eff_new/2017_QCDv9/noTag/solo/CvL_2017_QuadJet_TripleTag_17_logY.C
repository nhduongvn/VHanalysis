#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2017_QuadJet_TripleTag_17_logY()
{
//=========Macro generated from canvas: CvL_2017_QuadJet_TripleTag_17/CvL_2017_QuadJet_TripleTag_17
//=========  (Mon Apr 24 10:39:17 2023) by ROOT version 6.26/06
   TCanvas *CvL_2017_QuadJet_TripleTag_17 = new TCanvas("CvL_2017_QuadJet_TripleTag_17", "CvL_2017_QuadJet_TripleTag_17",0,0,600,600);
   CvL_2017_QuadJet_TripleTag_17->SetHighLightColor(2);
   CvL_2017_QuadJet_TripleTag_17->Range(-0.2,2.823079,1.133333,4.880037);
   CvL_2017_QuadJet_TripleTag_17->SetFillColor(0);
   CvL_2017_QuadJet_TripleTag_17->SetBorderMode(0);
   CvL_2017_QuadJet_TripleTag_17->SetBorderSize(2);
   CvL_2017_QuadJet_TripleTag_17->SetLogy();
   CvL_2017_QuadJet_TripleTag_17->SetLeftMargin(0.15);
   CvL_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   CvL_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_CvL__182 = new TH1D("_QuadJet_TripleTag_CvL__182","",10,0,1);
   _QuadJet_TripleTag_CvL__182->SetBinContent(1,24934);
   _QuadJet_TripleTag_CvL__182->SetBinContent(2,9884);
   _QuadJet_TripleTag_CvL__182->SetBinContent(3,3751);
   _QuadJet_TripleTag_CvL__182->SetBinContent(4,2469);
   _QuadJet_TripleTag_CvL__182->SetBinContent(5,2137);
   _QuadJet_TripleTag_CvL__182->SetBinContent(6,2402);
   _QuadJet_TripleTag_CvL__182->SetBinContent(7,2955);
   _QuadJet_TripleTag_CvL__182->SetBinContent(8,4324);
   _QuadJet_TripleTag_CvL__182->SetBinContent(9,7369);
   _QuadJet_TripleTag_CvL__182->SetBinContent(10,18791);
   _QuadJet_TripleTag_CvL__182->SetEntries(79016);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 79016  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4623");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.3847");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_CvL__182->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_CvL__182);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_CvL__182->SetLineColor(ci);
   _QuadJet_TripleTag_CvL__182->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_CvL__182->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_CvL__182->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvL__182->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvL__182->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvL__182->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_CvL__182->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvL__182->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvL__182->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvL__182->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvL__182->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvL__182->Draw("HIST");
   CvL_2017_QuadJet_TripleTag_17->Modified();
   CvL_2017_QuadJet_TripleTag_17->cd();
   CvL_2017_QuadJet_TripleTag_17->SetSelected(CvL_2017_QuadJet_TripleTag_17);
}
