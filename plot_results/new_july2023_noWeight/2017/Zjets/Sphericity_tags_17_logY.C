void Sphericity_tags_17_logY()
{
//=========Macro generated from canvas: Sphericity_tags_17/Sphericity_tags_17
//=========  (Thu Aug 10 12:31:32 2023) by ROOT version 6.14/09
   TCanvas *Sphericity_tags_17 = new TCanvas("Sphericity_tags_17", "Sphericity_tags_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_tags_17->SetHighLightColor(2);
   Sphericity_tags_17->Range(-0.2,-2.063422,1.133333,3.776277);
   Sphericity_tags_17->SetFillColor(0);
   Sphericity_tags_17->SetBorderMode(0);
   Sphericity_tags_17->SetBorderSize(2);
   Sphericity_tags_17->SetLogy();
   Sphericity_tags_17->SetLeftMargin(0.15);
   Sphericity_tags_17->SetFrameBorderMode(0);
   Sphericity_tags_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Sphericity_stack_4 = new TH1D("VbbHcc_tags_Sphericity_stack_4","",25,0,1);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(1,821.785);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(2,649.3312);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(3,350.6704);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(4,235.7391);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(5,139.6005);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(6,72.83064);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(7,33.28264);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(8,20.45591);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(9,16.34415);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(10,11.95962);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(11,7.803424);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(12,6.772738);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(13,5.487471);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(14,4.817544);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(15,2.35619);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(16,1.606663);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(17,1.253241);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(18,1.600018);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(19,0.5523512);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(20,0.06630981);
   VbbHcc_tags_Sphericity_stack_4->SetBinContent(21,0.1083014);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(1,18.22564);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(2,17.88058);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(3,12.28753);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(4,11.20026);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(5,7.969794);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(6,5.240283);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(7,2.356776);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(8,1.930897);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(9,1.644531);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(10,1.427083);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(11,1.054139);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(12,1.152861);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(13,0.8634812);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(14,0.8779604);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(15,0.4176476);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(16,0.4707997);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(17,0.3110393);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(18,0.4846184);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(19,0.3716153);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(20,0.06630981);
   VbbHcc_tags_Sphericity_stack_4->SetBinError(21,0.1083014);
   VbbHcc_tags_Sphericity_stack_4->SetEntries(17051);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   VbbHcc_tags_Sphericity_stack_4->SetFillColor(ci);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetTitle("Sphericity");
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetRange(1,25);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Sphericity_stack_4->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Sphericity_stack_4->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Sphericity_stack_4->Draw("HIST");
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
