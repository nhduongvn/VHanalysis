void genWeight__16_logY()
{
//=========Macro generated from canvas: genWeight__16/genWeight__16
//=========  (Thu Aug  3 13:22:13 2023) by ROOT version 6.14/09
   TCanvas *genWeight__16 = new TCanvas("genWeight__16", "genWeight__16",0,0,600,600);
   gStyle->SetOptStat(0);
   genWeight__16->SetHighLightColor(2);
   genWeight__16->Range(-2.8,-0.4954433,2.533333,3.97778);
   genWeight__16->SetFillColor(0);
   genWeight__16->SetBorderMode(0);
   genWeight__16->SetBorderSize(2);
   genWeight__16->SetLogy();
   genWeight__16->SetLeftMargin(0.15);
   genWeight__16->SetFrameBorderMode(0);
   genWeight__16->SetFrameBorderMode(0);
   
   TH1D *genWeight_stack_10 = new TH1D("genWeight_stack_10","",200,-2,2);
   genWeight_stack_10->SetBinContent(103,1790.231);
   genWeight_stack_10->SetBinError(103,0.8006157);
   genWeight_stack_10->SetEntries(5000000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000cc");
   genWeight_stack_10->SetFillColor(ci);
   genWeight_stack_10->GetXaxis()->SetTitle("Generator Weight");
   genWeight_stack_10->GetXaxis()->SetRange(1,200);
   genWeight_stack_10->GetXaxis()->SetLabelFont(42);
   genWeight_stack_10->GetXaxis()->SetLabelSize(0.035);
   genWeight_stack_10->GetXaxis()->SetTitleSize(0.035);
   genWeight_stack_10->GetXaxis()->SetTitleFont(42);
   genWeight_stack_10->GetYaxis()->SetLabelFont(42);
   genWeight_stack_10->GetYaxis()->SetLabelSize(0.035);
   genWeight_stack_10->GetYaxis()->SetTitleSize(0.035);
   genWeight_stack_10->GetYaxis()->SetTitleOffset(0);
   genWeight_stack_10->GetYaxis()->SetTitleFont(42);
   genWeight_stack_10->GetZaxis()->SetLabelFont(42);
   genWeight_stack_10->GetZaxis()->SetLabelSize(0.035);
   genWeight_stack_10->GetZaxis()->SetTitleSize(0.035);
   genWeight_stack_10->GetZaxis()->SetTitleFont(42);
   genWeight_stack_10->Draw("HIST");
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
