#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_QuadJet_DoubleTag_16_ideal_logY()
{
//=========Macro generated from canvas: pt_jet3_2016_QuadJet_DoubleTag_16_ideal/pt_jet3_2016_QuadJet_DoubleTag_16_ideal
//=========  (Thu Apr 27 10:19:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_QuadJet_DoubleTag_16_ideal = new TCanvas("pt_jet3_2016_QuadJet_DoubleTag_16_ideal", "pt_jet3_2016_QuadJet_DoubleTag_16_ideal",0,0,600,600);
   pt_jet3_2016_QuadJet_DoubleTag_16_ideal->SetHighLightColor(2);
   pt_jet3_2016_QuadJet_DoubleTag_16_ideal->Range(-100,-0.4926327,566.6667,1.423394);
   pt_jet3_2016_QuadJet_DoubleTag_16_ideal->SetFillColor(0);
   pt_jet3_2016_QuadJet_DoubleTag_16_ideal->SetBorderMode(0);
   pt_jet3_2016_QuadJet_DoubleTag_16_ideal->SetBorderSize(2);
   pt_jet3_2016_QuadJet_DoubleTag_16_ideal->SetLogy();
   pt_jet3_2016_QuadJet_DoubleTag_16_ideal->SetLeftMargin(0.15);
   pt_jet3_2016_QuadJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet3_2016_QuadJet_DoubleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_ideal_pt_jet3__257 = new TH1D("_QuadJet_DoubleTag_ideal_pt_jet3__257","",50,0,500);
   _QuadJet_DoubleTag_ideal_pt_jet3__257->SetBinContent(5,2);
   _QuadJet_DoubleTag_ideal_pt_jet3__257->SetBinContent(6,8);
   _QuadJet_DoubleTag_ideal_pt_jet3__257->SetBinContent(7,9);
   _QuadJet_DoubleTag_ideal_pt_jet3__257->SetBinContent(8,1);
   _QuadJet_DoubleTag_ideal_pt_jet3__257->SetBinContent(9,1);
   _QuadJet_DoubleTag_ideal_pt_jet3__257->SetBinContent(11,2);
   _QuadJet_DoubleTag_ideal_pt_jet3__257->SetBinContent(12,1);
   _QuadJet_DoubleTag_ideal_pt_jet3__257->SetBinContent(27,1);
   _QuadJet_DoubleTag_ideal_pt_jet3__257->SetEntries(25);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_ideal_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 25     ");
   ptstats_LaTex = ptstats->AddText("Mean  =  74.93");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  42.95");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_ideal_pt_jet3__257->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_ideal_pt_jet3__257);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_ideal_pt_jet3__257->SetLineColor(ci);
   _QuadJet_DoubleTag_ideal_pt_jet3__257->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_DoubleTag_ideal_pt_jet3__257->GetXaxis()->SetRange(1,50);
   _QuadJet_DoubleTag_ideal_pt_jet3__257->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet3__257->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_ideal_pt_jet3__257->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet3__257->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_ideal_pt_jet3__257->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet3__257->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet3__257->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet3__257->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_ideal_pt_jet3__257->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_ideal_pt_jet3__257->Draw("HIST");
   pt_jet3_2016_QuadJet_DoubleTag_16_ideal->Modified();
   pt_jet3_2016_QuadJet_DoubleTag_16_ideal->cd();
   pt_jet3_2016_QuadJet_DoubleTag_16_ideal->SetSelected(pt_jet3_2016_QuadJet_DoubleTag_16_ideal);
}
