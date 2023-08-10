void Sphericity_tags_17_logY()
{
//=========Macro generated from canvas: Sphericity_tags_17/Sphericity_tags_17
//=========  (Thu Aug 10 12:20:16 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_17 = new TCanvas("Sphericity_tags_17", "Sphericity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_17->SetHighLightColor(2);
   Sphericity_tags_17->Range(-0.2,-1.382441,1.133333,4.719199);
   Sphericity_tags_17->SetFillColor(0);
   Sphericity_tags_17->SetBorderMode(0);
   Sphericity_tags_17->SetBorderSize(2);
   Sphericity_tags_17->SetLogy();
   Sphericity_tags_17->SetLeftMargin(0.15);
   Sphericity_tags_17->SetFrameBorderMode(0);
   Sphericity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_3 = new TH1D("VbbHcc_tags_Sphericity_stack_3","",25,0,1);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(1,6784.009);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(2,5735.715);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(3,3258.192);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(4,1902.098);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(5,1103.981);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(6,645.7702);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(7,370.7931);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(8,227.1763);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(9,157.6907);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(10,108.0299);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(11,81.08597);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(12,59.39358);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(13,42.55173);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(14,32.85418);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(15,23.75593);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(16,18.50882);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(17,14.88744);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(18,9.130027);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(19,5.157217);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(20,2.167323);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(21,0.6463181);
   VbbHcc_tags_Sphericity_stack_3->SetBinContent(22,0.3378729);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(1,22.41979);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(2,20.64357);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(3,15.56066);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(4,11.89483);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(5,9.050065);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(6,6.910023);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(7,5.242209);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(8,4.078607);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(9,3.404444);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(10,2.81897);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(11,2.421762);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(12,2.078553);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(13,1.764205);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(14,1.525426);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(15,1.313083);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(16,1.179702);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(17,1.043353);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(18,0.8085221);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(19,0.5937942);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(20,0.395914);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(21,0.2259497);
   VbbHcc_tags_Sphericity_stack_3->SetBinError(22,0.1713872);
   VbbHcc_tags_Sphericity_stack_3->SetEntries(306587);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc00cc");
   VbbHcc_tags_Sphericity_stack_3->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_3->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_3->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_3->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_tags_17->Modified();
   Sphericity_tags_17->cd();
   Sphericity_tags_17->SetSelected(Sphericity_tags_17);
}
