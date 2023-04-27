#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2016_QuadJet_TripleTag_16_ideal_logY()
{
//=========Macro generated from canvas: pt_jet0_2016_QuadJet_TripleTag_16_ideal/pt_jet0_2016_QuadJet_TripleTag_16_ideal
//=========  (Wed Apr 26 16:41:43 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2016_QuadJet_TripleTag_16_ideal = new TCanvas("pt_jet0_2016_QuadJet_TripleTag_16_ideal", "pt_jet0_2016_QuadJet_TripleTag_16_ideal",0,0,600,600);
   pt_jet0_2016_QuadJet_TripleTag_16_ideal->SetHighLightColor(2);
   pt_jet0_2016_QuadJet_TripleTag_16_ideal->Range(-100,0.6244185,566.6667,3.411133);
   pt_jet0_2016_QuadJet_TripleTag_16_ideal->SetFillColor(0);
   pt_jet0_2016_QuadJet_TripleTag_16_ideal->SetBorderMode(0);
   pt_jet0_2016_QuadJet_TripleTag_16_ideal->SetBorderSize(2);
   pt_jet0_2016_QuadJet_TripleTag_16_ideal->SetLogy();
   pt_jet0_2016_QuadJet_TripleTag_16_ideal->SetLeftMargin(0.15);
   pt_jet0_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet0_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet0__218 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet0__218","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(6,16);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(7,99);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(8,251);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(9,476);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(10,578);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(11,688);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(12,686);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(13,716);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(14,684);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(15,649);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(16,642);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(17,542);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(18,542);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(19,484);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(20,363);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(21,384);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(22,349);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(23,310);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(24,274);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(25,222);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(26,207);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(27,184);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(28,223);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(29,153);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(30,147);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(31,129);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(32,119);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(33,86);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(34,108);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(35,90);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(36,87);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(37,68);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(38,66);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(39,51);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(40,51);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(41,42);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(42,51);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(43,56);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(44,45);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(45,42);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(46,36);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(47,33);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(48,26);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(49,25);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(50,25);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(51,312);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetEntries(11417);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_ideal_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 11417  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  184.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  87.53");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   _QuadJet_TripleTag_ideal_pt_jet0__218->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(_QuadJet_TripleTag_ideal_pt_jet0__218);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetLineColor(ci);
   _QuadJet_TripleTag_ideal_pt_jet0__218->GetXaxis()->SetTitle("Leading jet p_{T} [GeV]");
   _QuadJet_TripleTag_ideal_pt_jet0__218->GetXaxis()->SetRange(1,50);
   _QuadJet_TripleTag_ideal_pt_jet0__218->GetXaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0__218->GetXaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet0__218->GetXaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0__218->GetYaxis()->SetTitle("Events");
   _QuadJet_TripleTag_ideal_pt_jet0__218->GetYaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0__218->GetYaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0__218->GetZaxis()->SetLabelFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0__218->GetZaxis()->SetTitleOffset(1);
   _QuadJet_TripleTag_ideal_pt_jet0__218->GetZaxis()->SetTitleFont(42);
   _QuadJet_TripleTag_ideal_pt_jet0__218->Draw("HIST");
   pt_jet0_2016_QuadJet_TripleTag_16_ideal->Modified();
   pt_jet0_2016_QuadJet_TripleTag_16_ideal->cd();
   pt_jet0_2016_QuadJet_TripleTag_16_ideal->SetSelected(pt_jet0_2016_QuadJet_TripleTag_16_ideal);
}
