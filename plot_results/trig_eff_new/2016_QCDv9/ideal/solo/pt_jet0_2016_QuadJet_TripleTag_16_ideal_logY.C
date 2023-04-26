#ifdef __CLING__
#pragma cling optimize(0)
#endif
void pt_jet0_2016_QuadJet_TripleTag_16_ideal_logY()
{
//=========Macro generated from canvas: pt_jet0_2016_QuadJet_TripleTag_16_ideal/pt_jet0_2016_QuadJet_TripleTag_16_ideal
//=========  (Tue Apr 25 23:03:08 2023) by ROOT version 6.26/06
   TCanvas *pt_jet0_2016_QuadJet_TripleTag_16_ideal = new TCanvas("pt_jet0_2016_QuadJet_TripleTag_16_ideal", "pt_jet0_2016_QuadJet_TripleTag_16_ideal",0,0,600,600);
   pt_jet0_2016_QuadJet_TripleTag_16_ideal->SetHighLightColor(2);
   pt_jet0_2016_QuadJet_TripleTag_16_ideal->Range(-100,0.6246464,566.6667,3.409082);
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
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(9,482);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(10,583);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(11,693);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(12,692);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(13,713);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(14,685);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(15,651);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(16,644);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(17,543);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(18,546);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(19,489);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(20,365);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(21,387);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(22,350);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(23,314);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(24,277);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(25,224);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(26,208);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(27,186);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(28,224);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(29,154);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(30,147);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(31,130);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(32,119);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(33,87);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(34,108);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(35,92);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(36,87);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(37,69);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(38,66);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(39,52);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(40,53);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(41,42);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(42,51);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(43,56);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(44,45);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(45,43);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(46,35);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(47,34);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(48,26);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(49,25);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(50,25);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetBinContent(51,313);
   _QuadJet_TripleTag_ideal_pt_jet0__218->SetEntries(11481);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *ptstats_LaTex = ptstats->AddText("2016_QuadJet_TripleTag_ideal_pt_jet0");
   ptstats_LaTex->SetTextSize(0.0368);
   ptstats_LaTex = ptstats->AddText("Entries = 11481  ");
   ptstats_LaTex = ptstats->AddText("Mean  =  184.2");
   ptstats_LaTex = ptstats->AddText("Std Dev   =  87.56");
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
