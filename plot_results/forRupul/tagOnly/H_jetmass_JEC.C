#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_JEC()
{
//=========Macro generated from canvas: H_jetmass_JEC/H_jetmass_JEC
//=========  (Wed Mar 27 16:46:17 2024) by ROOT version 6.28/10
   TCanvas *H_jetmass_JEC = new TCanvas("H_jetmass_JEC", "H_jetmass_JEC",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC->SetHighLightColor(2);
   H_jetmass_JEC->Range(-60,-0.06002712,340,0.5402441);
   H_jetmass_JEC->SetFillColor(0);
   H_jetmass_JEC->SetFillStyle(4000);
   H_jetmass_JEC->SetBorderMode(0);
   H_jetmass_JEC->SetBorderSize(2);
   H_jetmass_JEC->SetLeftMargin(0.15);
   H_jetmass_JEC->SetFrameFillStyle(1000);
   H_jetmass_JEC->SetFrameBorderMode(0);
   H_jetmass_JEC->SetFrameFillStyle(1000);
   H_jetmass_JEC->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_H_jetmass_JEC__44 = new TH1D("VH_tagOnly_H_jetmass_JEC__44","",150,0,300);
   VH_tagOnly_H_jetmass_JEC__44->SetBinContent(2,0.002236962);
   VH_tagOnly_H_jetmass_JEC__44->SetBinContent(3,0.05052395);
   VH_tagOnly_H_jetmass_JEC__44->SetBinContent(4,0.2713592);
   VH_tagOnly_H_jetmass_JEC__44->SetBinContent(5,0.4215726);
   VH_tagOnly_H_jetmass_JEC__44->SetBinContent(6,0.4573495);
   VH_tagOnly_H_jetmass_JEC__44->SetBinContent(7,0.3633261);
   VH_tagOnly_H_jetmass_JEC__44->SetBinContent(8,0.3068608);
   VH_tagOnly_H_jetmass_JEC__44->SetBinContent(9,0.2018269);
   VH_tagOnly_H_jetmass_JEC__44->SetBinContent(10,0.163697);
   VH_tagOnly_H_jetmass_JEC__44->SetBinContent(11,0.1270404);
   VH_tagOnly_H_jetmass_JEC__44->SetBinContent(12,0.08879256);
   VH_tagOnly_H_jetmass_JEC__44->SetBinContent(13,0.06995148);
   VH_tagOnly_H_jetmass_JEC__44->SetBinContent(14,0.05624919);
   VH_tagOnly_H_jetmass_JEC__44->SetBinContent(15,0.02014689);
   VH_tagOnly_H_jetmass_JEC__44->SetBinContent(16,0.03478844);
   VH_tagOnly_H_jetmass_JEC__44->SetBinContent(17,0.005284269);
   VH_tagOnly_H_jetmass_JEC__44->SetBinContent(18,0.008042165);
   VH_tagOnly_H_jetmass_JEC__44->SetBinContent(19,0.004289456);
   VH_tagOnly_H_jetmass_JEC__44->SetBinContent(20,0.0101563);
   VH_tagOnly_H_jetmass_JEC__44->SetBinContent(21,0.004563378);
   VH_tagOnly_H_jetmass_JEC__44->SetBinContent(22,0.001047771);
   VH_tagOnly_H_jetmass_JEC__44->SetBinContent(23,0.01058351);
   VH_tagOnly_H_jetmass_JEC__44->SetBinContent(24,0.003879109);
   VH_tagOnly_H_jetmass_JEC__44->SetBinContent(25,0.006009777);
   VH_tagOnly_H_jetmass_JEC__44->SetBinContent(28,0.004280196);
   VH_tagOnly_H_jetmass_JEC__44->SetBinContent(30,0.002549571);
   VH_tagOnly_H_jetmass_JEC__44->SetBinContent(31,0.002043233);
   VH_tagOnly_H_jetmass_JEC__44->SetBinContent(38,0.007668334);
   VH_tagOnly_H_jetmass_JEC__44->SetBinError(2,0.002236962);
   VH_tagOnly_H_jetmass_JEC__44->SetBinError(3,0.0210255);
   VH_tagOnly_H_jetmass_JEC__44->SetBinError(4,0.03643926);
   VH_tagOnly_H_jetmass_JEC__44->SetBinError(5,0.03708906);
   VH_tagOnly_H_jetmass_JEC__44->SetBinError(6,0.0421912);
   VH_tagOnly_H_jetmass_JEC__44->SetBinError(7,0.03473449);
   VH_tagOnly_H_jetmass_JEC__44->SetBinError(8,0.03075446);
   VH_tagOnly_H_jetmass_JEC__44->SetBinError(9,0.03489287);
   VH_tagOnly_H_jetmass_JEC__44->SetBinError(10,0.02931978);
   VH_tagOnly_H_jetmass_JEC__44->SetBinError(11,0.02175531);
   VH_tagOnly_H_jetmass_JEC__44->SetBinError(12,0.01800947);
   VH_tagOnly_H_jetmass_JEC__44->SetBinError(13,0.01432642);
   VH_tagOnly_H_jetmass_JEC__44->SetBinError(14,0.01427212);
   VH_tagOnly_H_jetmass_JEC__44->SetBinError(15,0.007572967);
   VH_tagOnly_H_jetmass_JEC__44->SetBinError(16,0.01266305);
   VH_tagOnly_H_jetmass_JEC__44->SetBinError(17,0.003772383);
   VH_tagOnly_H_jetmass_JEC__44->SetBinError(18,0.005767631);
   VH_tagOnly_H_jetmass_JEC__44->SetBinError(19,0.003037578);
   VH_tagOnly_H_jetmass_JEC__44->SetBinError(20,0.005104219);
   VH_tagOnly_H_jetmass_JEC__44->SetBinError(21,0.003269348);
   VH_tagOnly_H_jetmass_JEC__44->SetBinError(22,0.001047771);
   VH_tagOnly_H_jetmass_JEC__44->SetBinError(23,0.006249935);
   VH_tagOnly_H_jetmass_JEC__44->SetBinError(24,0.003879109);
   VH_tagOnly_H_jetmass_JEC__44->SetBinError(25,0.006009777);
   VH_tagOnly_H_jetmass_JEC__44->SetBinError(28,0.004280196);
   VH_tagOnly_H_jetmass_JEC__44->SetBinError(30,0.002549571);
   VH_tagOnly_H_jetmass_JEC__44->SetBinError(31,0.002043233);
   VH_tagOnly_H_jetmass_JEC__44->SetBinError(38,0.00448185);
   VH_tagOnly_H_jetmass_JEC__44->SetEntries(903);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_H_jetmass_JEC__44->SetLineColor(ci);
   VH_tagOnly_H_jetmass_JEC__44->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VH_tagOnly_H_jetmass_JEC__44->GetXaxis()->SetRange(1,150);
   VH_tagOnly_H_jetmass_JEC__44->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_H_jetmass_JEC__44->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_H_jetmass_JEC__44->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_H_jetmass_JEC__44->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_tagOnly_H_jetmass_JEC__44->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_H_jetmass_JEC__44->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_H_jetmass_JEC__44->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_H_jetmass_JEC__44->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_H_jetmass_JEC__44->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_H_jetmass_JEC__44->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_H_jetmass_JEC__44->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_H_jetmass_JEC__44->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_H_jetmass_JEC__44->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC->Modified();
   H_jetmass_JEC->cd();
   H_jetmass_JEC->SetSelected(H_jetmass_JEC);
}
