#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2017_QuadJet_TripleTag_17_logY()
{
//=========Macro generated from canvas: CvL_2017_QuadJet_TripleTag_17/CvL_2017_QuadJet_TripleTag_17
//=========  (Mon Apr 24 10:39:20 2023) by ROOT version 6.26/06
   TCanvas *CvL_2017_QuadJet_TripleTag_17 = new TCanvas("CvL_2017_QuadJet_TripleTag_17", "CvL_2017_QuadJet_TripleTag_17",0,0,600,600);
   CvL_2017_QuadJet_TripleTag_17->SetHighLightColor(2);
   CvL_2017_QuadJet_TripleTag_17->Range(-0.2,2.269661,1.133333,4.106235);
   CvL_2017_QuadJet_TripleTag_17->SetFillColor(0);
   CvL_2017_QuadJet_TripleTag_17->SetBorderMode(0);
   CvL_2017_QuadJet_TripleTag_17->SetBorderSize(2);
   CvL_2017_QuadJet_TripleTag_17->SetLogy();
   CvL_2017_QuadJet_TripleTag_17->SetLeftMargin(0.15);
   CvL_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   CvL_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_tagged_CvL__398 = new TH1D("_QuadJet_TripleTag_tagged_CvL__398","",10,0,1);
   _QuadJet_TripleTag_tagged_CvL__398->SetBinContent(1,2499);
   _QuadJet_TripleTag_tagged_CvL__398->SetBinContent(2,3574);
   _QuadJet_TripleTag_tagged_CvL__398->SetBinContent(3,1181);
   _QuadJet_TripleTag_tagged_CvL__398->SetBinContent(4,741);
   _QuadJet_TripleTag_tagged_CvL__398->SetBinContent(5,568);
   _QuadJet_TripleTag_tagged_CvL__398->SetBinContent(6,612);
   _QuadJet_TripleTag_tagged_CvL__398->SetBinContent(7,748);
   _QuadJet_TripleTag_tagged_CvL__398->SetBinContent(8,1017);
   _QuadJet_TripleTag_tagged_CvL__398->SetBinContent(9,1720);
   _QuadJet_TripleTag_tagged_CvL__398->SetBinContent(10,4416);
   _QuadJet_TripleTag_tagged_CvL__398->SetEntries(17076);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_tagged_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 17076  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5133");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.368");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_tagged_CvL__398->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_tagged_CvL__398);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_tagged_CvL__398->SetLineColor(ci);
   _QuadJet_TripleTag_tagged_CvL__398->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_tagged_CvL__398->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_tagged_CvL__398->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvL__398->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_CvL__398->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvL__398->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_tagged_CvL__398->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvL__398->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvL__398->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_tagged_CvL__398->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_tagged_CvL__398->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_tagged_CvL__398->Draw("HIST");
   CvL_2017_QuadJet_TripleTag_17->Modified();
   CvL_2017_QuadJet_TripleTag_17->cd();
   CvL_2017_QuadJet_TripleTag_17->SetSelected(CvL_2017_QuadJet_TripleTag_17);
}
