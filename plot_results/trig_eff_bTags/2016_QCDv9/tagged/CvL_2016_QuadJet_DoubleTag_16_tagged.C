#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CvL_2016_QuadJet_DoubleTag_16_tagged()
{
//=========Macro generated from canvas: CvL_2016_QuadJet_DoubleTag_16_tagged/CvL_2016_QuadJet_DoubleTag_16_tagged
//=========  (Thu Apr 27 10:19:46 2023) by ROOT version 6.26/06
   TCanvas *CvL_2016_QuadJet_DoubleTag_16_tagged = new TCanvas("CvL_2016_QuadJet_DoubleTag_16_tagged", "CvL_2016_QuadJet_DoubleTag_16_tagged",0,0,600,600);
   CvL_2016_QuadJet_DoubleTag_16_tagged->SetHighLightColor(2);
   CvL_2016_QuadJet_DoubleTag_16_tagged->Range(-0.2183529,0.01583898,1.171633,0.0371421);
   CvL_2016_QuadJet_DoubleTag_16_tagged->SetFillColor(0);
   CvL_2016_QuadJet_DoubleTag_16_tagged->SetFillStyle(4000);
   CvL_2016_QuadJet_DoubleTag_16_tagged->SetBorderMode(0);
   CvL_2016_QuadJet_DoubleTag_16_tagged->SetBorderSize(2);
   CvL_2016_QuadJet_DoubleTag_16_tagged->SetLeftMargin(0.15709);
   CvL_2016_QuadJet_DoubleTag_16_tagged->SetRightMargin(0.1234783);
   CvL_2016_QuadJet_DoubleTag_16_tagged->SetBottomMargin(0.12);
   CvL_2016_QuadJet_DoubleTag_16_tagged->SetFrameFillStyle(1000);
   CvL_2016_QuadJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   CvL_2016_QuadJet_DoubleTag_16_tagged->SetFrameFillStyle(1000);
   CvL_2016_QuadJet_DoubleTag_16_tagged->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_tagged_CvL__196 = new TH1D("_QuadJet_DoubleTag_tagged_CvL__196","",10,0,1);
   _QuadJet_DoubleTag_tagged_CvL__196->SetBinContent(1,0.01914894);
   _QuadJet_DoubleTag_tagged_CvL__196->SetBinContent(2,0.02880658);
   _QuadJet_DoubleTag_tagged_CvL__196->SetBinContent(3,0.03061224);
   _QuadJet_DoubleTag_tagged_CvL__196->SetBinContent(4,0.02631579);
   _QuadJet_DoubleTag_tagged_CvL__196->SetBinContent(5,0.03271028);
   _QuadJet_DoubleTag_tagged_CvL__196->SetBinContent(6,0.02024291);
   _QuadJet_DoubleTag_tagged_CvL__196->SetBinContent(7,0.03422053);
   _QuadJet_DoubleTag_tagged_CvL__196->SetBinContent(8,0.02122016);
   _QuadJet_DoubleTag_tagged_CvL__196->SetBinContent(9,0.03041145);
   _QuadJet_DoubleTag_tagged_CvL__196->SetBinContent(10,0.02290749);
   _QuadJet_DoubleTag_tagged_CvL__196->SetEntries(0.2665964);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_tagged_CvL");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 0      ");
   ptstats_LaTex = ptstats->AddText("Mean  = 0.5018");
   ptstats_LaTex = ptstats->AddText("Std Dev   = 0.2773");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_tagged_CvL__196->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_tagged_CvL__196);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   _QuadJet_DoubleTag_tagged_CvL__196->SetLineColor(ci);
   _QuadJet_DoubleTag_tagged_CvL__196->GetXaxis()->SetTitle("CvL tagging score");
   _QuadJet_DoubleTag_tagged_CvL__196->GetXaxis()->SetRange(1,100);
   _QuadJet_DoubleTag_tagged_CvL__196->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_CvL__196->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_CvL__196->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_CvL__196->GetYaxis()->SetTitle("Efficiency");
   _QuadJet_DoubleTag_tagged_CvL__196->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_CvL__196->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_CvL__196->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_CvL__196->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_CvL__196->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_CvL__196->Draw("HIST");
   CvL_2016_QuadJet_DoubleTag_16_tagged->Modified();
   CvL_2016_QuadJet_DoubleTag_16_tagged->cd();
   CvL_2016_QuadJet_DoubleTag_16_tagged->SetSelected(CvL_2016_QuadJet_DoubleTag_16_tagged);
}
