#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet3_2016_QuadJet_TripleTag_16_ideal_logY()
{
//=========Macro generated from canvas: pt_jet3_2016_QuadJet_TripleTag_16_ideal/pt_jet3_2016_QuadJet_TripleTag_16_ideal
//=========  (Wed May  3 17:53:43 2023) by ROOT version 6.26/06
   TCanvas *pt_jet3_2016_QuadJet_TripleTag_16_ideal = new TCanvas("pt_jet3_2016_QuadJet_TripleTag_16_ideal", "pt_jet3_2016_QuadJet_TripleTag_16_ideal",0,0,600,600);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetHighLightColor(2);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->Range(-100,-0.6631103,566.6667,2.957693);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetFillColor(0);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetBorderMode(0);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetBorderSize(2);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetLogy();
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetLeftMargin(0.15);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet3__20 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet3__20","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet3__20->SetBinContent(5,55);
   _QuadJet_TripleTag_ideal_pt_jet3__20->SetBinContent(6,184);
   _QuadJet_TripleTag_ideal_pt_jet3__20->SetBinContent(7,208);
   _QuadJet_TripleTag_ideal_pt_jet3__20->SetBinContent(8,120);
   _QuadJet_TripleTag_ideal_pt_jet3__20->SetBinContent(9,86);
   _QuadJet_TripleTag_ideal_pt_jet3__20->SetBinContent(10,57);
   _QuadJet_TripleTag_ideal_pt_jet3__20->SetBinContent(11,45);
   _QuadJet_TripleTag_ideal_pt_jet3__20->SetBinContent(12,33);
   _QuadJet_TripleTag_ideal_pt_jet3__20->SetBinContent(13,16);
   _QuadJet_TripleTag_ideal_pt_jet3__20->SetBinContent(14,11);
   _QuadJet_TripleTag_ideal_pt_jet3__20->SetBinContent(15,8);
   _QuadJet_TripleTag_ideal_pt_jet3__20->SetBinContent(16,6);
   _QuadJet_TripleTag_ideal_pt_jet3__20->SetBinContent(17,4);
   _QuadJet_TripleTag_ideal_pt_jet3__20->SetBinContent(18,2);
   _QuadJet_TripleTag_ideal_pt_jet3__20->SetBinContent(19,1);
   _QuadJet_TripleTag_ideal_pt_jet3__20->SetBinContent(20,2);
   _QuadJet_TripleTag_ideal_pt_jet3__20->SetBinContent(24,1);
   _QuadJet_TripleTag_ideal_pt_jet3__20->SetBinContent(26,1);
   _QuadJet_TripleTag_ideal_pt_jet3__20->SetBinContent(27,2);
   _QuadJet_TripleTag_ideal_pt_jet3__20->SetEntries(842);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_ideal_pt_jet3");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 842    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  76.76");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  27.51");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet3__20->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet3__20);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_pt_jet3__20->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet3__20->GetXaxis()->SetTitle("Sub^{(3)}leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet3__20->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_ideal_pt_jet3__20->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__20->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet3__20->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__20->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_pt_jet3__20->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__20->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__20->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__20->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet3__20->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet3__20->Draw("HIST");
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->Modified();
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->cd();
   pt_jet3_2016_QuadJet_TripleTag_16_ideal->SetSelected(pt_jet3_2016_QuadJet_TripleTag_16_ideal);
}
