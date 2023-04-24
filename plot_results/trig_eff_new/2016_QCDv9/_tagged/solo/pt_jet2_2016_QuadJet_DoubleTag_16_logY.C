#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet2_2016_QuadJet_DoubleTag_16_logY()
{
//=========Macro generated from canvas: pt_jet2_2016_QuadJet_DoubleTag_16/pt_jet2_2016_QuadJet_DoubleTag_16
//=========  (Mon Apr 24 10:39:18 2023) by ROOT version 6.26/06
   TCanvas *pt_jet2_2016_QuadJet_DoubleTag_16 = new TCanvas("pt_jet2_2016_QuadJet_DoubleTag_16", "pt_jet2_2016_QuadJet_DoubleTag_16",0,0,600,600);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetHighLightColor(2);
   pt_jet2_2016_QuadJet_DoubleTag_16->Range(-100,-0.6345905,566.6667,2.701015);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetFillColor(0);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetBorderMode(0);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetBorderSize(2);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetLogy();
   pt_jet2_2016_QuadJet_DoubleTag_16->SetLeftMargin(0.15);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   pt_jet2_2016_QuadJet_DoubleTag_16->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_DoubleTag_tagged_pt_jet2__269 = new TH1D("_QuadJet_DoubleTag_tagged_pt_jet2__269","",50,0,500);
   _QuadJet_DoubleTag_tagged_pt_jet2__269->SetBinContent(5,3);
   _QuadJet_DoubleTag_tagged_pt_jet2__269->SetBinContent(6,73);
   _QuadJet_DoubleTag_tagged_pt_jet2__269->SetBinContent(7,111);
   _QuadJet_DoubleTag_tagged_pt_jet2__269->SetBinContent(8,123);
   _QuadJet_DoubleTag_tagged_pt_jet2__269->SetBinContent(9,99);
   _QuadJet_DoubleTag_tagged_pt_jet2__269->SetBinContent(10,63);
   _QuadJet_DoubleTag_tagged_pt_jet2__269->SetBinContent(11,66);
   _QuadJet_DoubleTag_tagged_pt_jet2__269->SetBinContent(12,35);
   _QuadJet_DoubleTag_tagged_pt_jet2__269->SetBinContent(13,35);
   _QuadJet_DoubleTag_tagged_pt_jet2__269->SetBinContent(14,23);
   _QuadJet_DoubleTag_tagged_pt_jet2__269->SetBinContent(15,17);
   _QuadJet_DoubleTag_tagged_pt_jet2__269->SetBinContent(16,13);
   _QuadJet_DoubleTag_tagged_pt_jet2__269->SetBinContent(17,14);
   _QuadJet_DoubleTag_tagged_pt_jet2__269->SetBinContent(18,5);
   _QuadJet_DoubleTag_tagged_pt_jet2__269->SetBinContent(19,4);
   _QuadJet_DoubleTag_tagged_pt_jet2__269->SetBinContent(20,5);
   _QuadJet_DoubleTag_tagged_pt_jet2__269->SetBinContent(21,2);
   _QuadJet_DoubleTag_tagged_pt_jet2__269->SetBinContent(22,4);
   _QuadJet_DoubleTag_tagged_pt_jet2__269->SetBinContent(25,2);
   _QuadJet_DoubleTag_tagged_pt_jet2__269->SetBinContent(27,1);
   _QuadJet_DoubleTag_tagged_pt_jet2__269->SetBinContent(28,1);
   _QuadJet_DoubleTag_tagged_pt_jet2__269->SetBinContent(29,1);
   _QuadJet_DoubleTag_tagged_pt_jet2__269->SetBinContent(32,1);
   _QuadJet_DoubleTag_tagged_pt_jet2__269->SetEntries(701);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_DoubleTag_tagged_pt_jet2");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 701    ");
   ptstats_LaTex = ptstats->AddText("Mean  =  93.64");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  36.03");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_DoubleTag_tagged_pt_jet2__269->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_DoubleTag_tagged_pt_jet2__269);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_DoubleTag_tagged_pt_jet2__269->SetLineColor(ci);
   _QuadJet_DoubleTag_tagged_pt_jet2__269->GetXaxis()->SetTitle("Subsubleading jet p_{T} [GeV]");
   _QuadJet_DoubleTag_tagged_pt_jet2__269->GetXaxis()->SetRange(1,50);
   _QuadJet_DoubleTag_tagged_pt_jet2__269->GetXaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet2__269->GetXaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_pt_jet2__269->GetXaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet2__269->GetYaxis()->SetTitle("Events");
   _QuadJet_DoubleTag_tagged_pt_jet2__269->GetYaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet2__269->GetYaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet2__269->GetZaxis()->SetLabelFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet2__269->GetZaxis()->SetTitleOffset(1);
   _QuadJet_DoubleTag_tagged_pt_jet2__269->GetZaxis()->SetTitleFont(42);
   _QuadJet_DoubleTag_tagged_pt_jet2__269->Draw("HIST");
   pt_jet2_2016_QuadJet_DoubleTag_16->Modified();
   pt_jet2_2016_QuadJet_DoubleTag_16->cd();
   pt_jet2_2016_QuadJet_DoubleTag_16->SetSelected(pt_jet2_2016_QuadJet_DoubleTag_16);
}
