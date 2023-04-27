#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2017_QuadJet_TripleTag_17_logY()
{
//=========Macro generated from canvas: CvL_2017_QuadJet_TripleTag_17/CvL_2017_QuadJet_TripleTag_17
//=========  (Thu Apr 27 10:18:23 2023) by ROOT version 6.26/06
   TCanvas *CvL_2017_QuadJet_TripleTag_17 = new TCanvas("CvL_2017_QuadJet_TripleTag_17", "CvL_2017_QuadJet_TripleTag_17",0,0,600,600);
   CvL_2017_QuadJet_TripleTag_17->SetHighLightColor(2);
   CvL_2017_QuadJet_TripleTag_17->Range(-0.2,2.84974,1.133333,4.908031);
   CvL_2017_QuadJet_TripleTag_17->SetFillColor(0);
   CvL_2017_QuadJet_TripleTag_17->SetBorderMode(0);
   CvL_2017_QuadJet_TripleTag_17->SetBorderSize(2);
   CvL_2017_QuadJet_TripleTag_17->SetLogy();
   CvL_2017_QuadJet_TripleTag_17->SetLeftMargin(0.15);
   CvL_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   CvL_2017_QuadJet_TripleTag_17->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_CvL__44 = new TH1D("_QuadJet_TripleTag_CvL__44","",10,0,1);
   _QuadJet_TripleTag_CvL__44->SetBinContent(1,26586);
   _QuadJet_TripleTag_CvL__44->SetBinContent(2,10512);
   _QuadJet_TripleTag_CvL__44->SetBinContent(3,4021);
   _QuadJet_TripleTag_CvL__44->SetBinContent(4,2640);
   _QuadJet_TripleTag_CvL__44->SetBinContent(5,2273);
   _QuadJet_TripleTag_CvL__44->SetBinContent(6,2559);
   _QuadJet_TripleTag_CvL__44->SetBinContent(7,3171);
   _QuadJet_TripleTag_CvL__44->SetBinContent(8,4643);
   _QuadJet_TripleTag_CvL__44->SetBinContent(9,7888);
   _QuadJet_TripleTag_CvL__44->SetBinContent(10,20259);
   _QuadJet_TripleTag_CvL__44->SetEntries(84552);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2017_QuadJet_TripleTag_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 84552  ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.4639");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  0.385");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_CvL__44->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_CvL__44);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_CvL__44->SetLineColor(ci);
   _QuadJet_TripleTag_CvL__44->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_TripleTag_CvL__44->GetXaxis()->SetRange(1,10);
   _QuadJet_TripleTag_CvL__44->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvL__44->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvL__44->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvL__44->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_CvL__44->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvL__44->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvL__44->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_CvL__44->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_CvL__44->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_CvL__44->Draw("HIST");
   CvL_2017_QuadJet_TripleTag_17->Modified();
   CvL_2017_QuadJet_TripleTag_17->cd();
   CvL_2017_QuadJet_TripleTag_17->SetSelected(CvL_2017_QuadJet_TripleTag_17);
}
