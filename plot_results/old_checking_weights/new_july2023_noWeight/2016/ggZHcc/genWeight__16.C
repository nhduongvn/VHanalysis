void genWeight__16()
{
//=========Macro generated from canvas: genWeight__16/genWeight__16
//=========  (Thu Aug  3 12:48:55 2023) by ROOT version 6.14/09
   TCanvas *genWeight__16 = new TCanvas("genWeight__16", "genWeight__16",0,0,600,600);
   gStyle->SetOptStat(0);
   genWeight__16->SetHighLightColor(2);
   genWeight__16->Range(-2.8,-11.59838,2.533333,104.3855);
   genWeight__16->SetFillColor(0);
   genWeight__16->SetBorderMode(0);
   genWeight__16->SetBorderSize(2);
   genWeight__16->SetLeftMargin(0.15);
   genWeight__16->SetFrameBorderMode(0);
   genWeight__16->SetFrameBorderMode(0);
   
   TH1D *genWeight_stack_12 = new TH1D("genWeight_stack_12","",200,-2,2);
   genWeight_stack_12->SetBinContent(101,0.04715909);
   genWeight_stack_12->SetBinContent(102,0.04787362);
   genWeight_stack_12->SetBinContent(103,88.36864);
   genWeight_stack_12->SetBinContent(111,0.02357955);
   genWeight_stack_12->SetBinContent(117,0.02357955);
   genWeight_stack_12->SetBinContent(121,0.02357955);
   genWeight_stack_12->SetBinContent(125,0.02357955);
   genWeight_stack_12->SetBinContent(144,0.02393681);
   genWeight_stack_12->SetBinContent(146,0.02357955);
   genWeight_stack_12->SetBinContent(200,0.02393681);
   genWeight_stack_12->SetBinContent(201,0.3083204);
   genWeight_stack_12->SetBinError(101,0.004104672);
   genWeight_stack_12->SetBinError(102,0.004135651);
   genWeight_stack_12->SetBinError(103,0.1776826);
   genWeight_stack_12->SetBinError(111,0.002902441);
   genWeight_stack_12->SetBinError(117,0.002902441);
   genWeight_stack_12->SetBinError(121,0.002902441);
   genWeight_stack_12->SetBinError(125,0.002902441);
   genWeight_stack_12->SetBinError(144,0.002924347);
   genWeight_stack_12->SetBinError(146,0.002902441);
   genWeight_stack_12->SetBinError(200,0.002924347);
   genWeight_stack_12->SetBinError(201,0.01049535);
   genWeight_stack_12->SetEntries(248940);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   genWeight_stack_12->SetFillColor(ci);
   genWeight_stack_12->GetXaxis()->SetTitle("Generator Weight");
   genWeight_stack_12->GetXaxis()->SetRange(1,200);
   genWeight_stack_12->GetXaxis()->SetLabelFont(42);
   genWeight_stack_12->GetXaxis()->SetLabelSize(0.035);
   genWeight_stack_12->GetXaxis()->SetTitleSize(0.035);
   genWeight_stack_12->GetXaxis()->SetTitleFont(42);
   genWeight_stack_12->GetYaxis()->SetLabelFont(42);
   genWeight_stack_12->GetYaxis()->SetLabelSize(0.035);
   genWeight_stack_12->GetYaxis()->SetTitleSize(0.035);
   genWeight_stack_12->GetYaxis()->SetTitleOffset(0);
   genWeight_stack_12->GetYaxis()->SetTitleFont(42);
   genWeight_stack_12->GetZaxis()->SetLabelFont(42);
   genWeight_stack_12->GetZaxis()->SetLabelSize(0.035);
   genWeight_stack_12->GetZaxis()->SetTitleSize(0.035);
   genWeight_stack_12->GetZaxis()->SetTitleFont(42);
   genWeight_stack_12->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   genWeight__16->Modified();
   genWeight__16->cd();
   genWeight__16->SetSelected(genWeight__16);
}
