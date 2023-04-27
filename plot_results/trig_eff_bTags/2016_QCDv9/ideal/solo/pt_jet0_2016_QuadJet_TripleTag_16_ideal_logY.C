#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2016_QuadJet_TripleTag_16_ideal_logY()
{
//=========Macro generated from canvas: pt_jet0_2016_QuadJet_TripleTag_16_ideal/pt_jet0_2016_QuadJet_TripleTag_16_ideal
//=========  (Thu Apr 27 10:19:47 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2016_QuadJet_TripleTag_16_ideal = new TCanvas("pt_jet0_2016_QuadJet_TripleTag_16_ideal", "pt_jet0_2016_QuadJet_TripleTag_16_ideal",0,0,600,600);
   pt_jet0_2016_QuadJet_TripleTag_16_ideal->SetHighLightColor(2);
   pt_jet0_2016_QuadJet_TripleTag_16_ideal->Range(-100,-0.5888869,566.6667,2.289682);
   pt_jet0_2016_QuadJet_TripleTag_16_ideal->SetFillColor(0);
   pt_jet0_2016_QuadJet_TripleTag_16_ideal->SetBorderMode(0);
   pt_jet0_2016_QuadJet_TripleTag_16_ideal->SetBorderSize(2);
   pt_jet0_2016_QuadJet_TripleTag_16_ideal->SetLogy();
   pt_jet0_2016_QuadJet_TripleTag_16_ideal->SetLeftMargin(0.15);
   pt_jet0_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   pt_jet0_2016_QuadJet_TripleTag_16_ideal->SetFrameBorderMode(0);
   
   TH1D *_QuadJet_TripleTag_ideal_pt_jet0__218 = new TH1D("_QuadJet_TripleTag_ideal_pt_jet0__218","",50,0,500);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(6,1);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(7,3);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(8,15);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(9,25);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(10,30);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(11,40);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(12,40);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(13,52);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(14,34);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(15,53);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(16,35);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(17,32);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(18,33);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(19,25);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(20,29);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(21,23);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(22,29);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(23,26);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(24,24);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(25,17);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(26,15);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(27,18);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(28,18);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(29,15);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(30,11);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(31,9);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(32,13);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(33,7);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(34,9);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(35,10);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(36,8);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(37,7);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(38,7);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(39,8);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(40,1);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(41,2);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(42,8);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(43,1);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(45,1);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(46,2);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(47,1);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(48,3);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(49,3);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(50,1);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(51,23);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetEntries(767);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_ideal_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 767    ");
   ptstats_LaTex = ptstats->AddText("Mean  =    195");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  88.65");
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
