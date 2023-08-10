void genWeight__16_logY()
{
//=========Macro generated from canvas: genWeight__16/genWeight__16
//=========  (Thu Aug  3 13:22:13 2023) by ROOT version 6.14/09
   TCanvas *genWeight__16 = new TCanvas("genWeight__16", "genWeight__16",0,0,600,600);
   gStyle->SetOptStat(0);
   genWeight__16->SetHighLightColor(2);
   genWeight__16->Range(-2.8,8.284698,2.533333,12.75792);
   genWeight__16->SetFillColor(0);
   genWeight__16->SetBorderMode(0);
   genWeight__16->SetBorderSize(2);
   genWeight__16->SetLogy();
   genWeight__16->SetLeftMargin(0.15);
   genWeight__16->SetFrameBorderMode(0);
   genWeight__16->SetFrameBorderMode(0);
   
   TH1D *genWeight_stack_1 = new TH1D("genWeight_stack_1","",200,-2,2);
   genWeight_stack_1->SetBinContent(151,1.079073e+12);
   genWeight_stack_1->SetBinError(151,1.422313e+08);
   genWeight_stack_1->SetEntries(2.596566e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   genWeight_stack_1->SetFillColor(ci);
   genWeight_stack_1->GetXaxis()->SetTitle("Generator Weight");
   genWeight_stack_1->GetXaxis()->SetRange(1,200);
   genWeight_stack_1->GetXaxis()->SetLabelFont(42);
   genWeight_stack_1->GetXaxis()->SetLabelSize(0.035);
   genWeight_stack_1->GetXaxis()->SetTitleSize(0.035);
   genWeight_stack_1->GetXaxis()->SetTitleFont(42);
   genWeight_stack_1->GetYaxis()->SetLabelFont(42);
   genWeight_stack_1->GetYaxis()->SetLabelSize(0.035);
   genWeight_stack_1->GetYaxis()->SetTitleSize(0.035);
   genWeight_stack_1->GetYaxis()->SetTitleOffset(0);
   genWeight_stack_1->GetYaxis()->SetTitleFont(42);
   genWeight_stack_1->GetZaxis()->SetLabelFont(42);
   genWeight_stack_1->GetZaxis()->SetLabelSize(0.035);
   genWeight_stack_1->GetZaxis()->SetTitleSize(0.035);
   genWeight_stack_1->GetZaxis()->SetTitleFont(42);
   genWeight_stack_1->Draw("HIST");
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
