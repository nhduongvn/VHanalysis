#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_dR_tags_18()
{
//=========Macro generated from canvas: H_dR_tags_18/H_dR_tags_18
//=========  (Thu Mar  9 13:18:49 2023) by ROOT version 6.26/06
   TCanvas *H_dR_tags_18 = new TCanvas("H_dR_tags_18", "H_dR_tags_18",0,0,600,600);
   H_dR_tags_18->SetHighLightColor(2);
   H_dR_tags_18->Range(-1.353788,-195184.6,7.264125,1431353);
   H_dR_tags_18->SetFillColor(0);
   H_dR_tags_18->SetFillStyle(4000);
   H_dR_tags_18->SetBorderMode(0);
   H_dR_tags_18->SetBorderSize(2);
   H_dR_tags_18->SetLeftMargin(0.15709);
   H_dR_tags_18->SetRightMargin(0.1234783);
   H_dR_tags_18->SetBottomMargin(0.12);
   H_dR_tags_18->SetFrameFillStyle(1000);
   H_dR_tags_18->SetFrameBorderMode(0);
   H_dR_tags_18->SetFrameFillStyle(1000);
   H_dR_tags_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(1268700);
   
   TH1F *st_stack_23 = new TH1F("st_stack_23","",30,0,6);
   st_stack_23->SetMinimum(0);
   st_stack_23->SetMaximum(1268700);
   st_stack_23->SetDirectory(0);
   st_stack_23->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_23->SetLineColor(ci);
   st_stack_23->GetXaxis()->SetTitle("#DeltaR(c,c)");
   st_stack_23->GetXaxis()->SetRange(1,31);
   st_stack_23->GetXaxis()->SetLabelFont(42);
   st_stack_23->GetXaxis()->SetTitleOffset(1);
   st_stack_23->GetXaxis()->SetTitleFont(42);
   st_stack_23->GetYaxis()->SetTitle("Event/0.2");
   st_stack_23->GetYaxis()->SetLabelFont(42);
   st_stack_23->GetYaxis()->SetTitleSize(0.037);
   st_stack_23->GetYaxis()->SetTitleFont(42);
   st_stack_23->GetZaxis()->SetLabelFont(42);
   st_stack_23->GetZaxis()->SetTitleOffset(1);
   st_stack_23->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_23);
   
   
   TH1D *VbbHcc_tags_H_dR_stack_1 = new TH1D("VbbHcc_tags_H_dR_stack_1","",30,0,6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(2,144.4095);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(3,480878.1);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(4,516527.1);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(5,406311.7);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(6,342131.7);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(7,431515.4);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(8,377834.5);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(9,432562.2);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(10,498058.6);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(11,498119);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(12,512197.9);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(13,613619.9);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(14,851593.1);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(15,841027.9);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(16,903048.5);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(17,637919.9);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(18,451055.9);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(19,349071.4);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(20,253461.7);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(21,226897.4);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(22,145082);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(23,113509.3);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(24,72525.24);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(25,47000.98);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(26,30260.01);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(27,7410.202);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(28,1697.553);
   VbbHcc_tags_H_dR_stack_1->SetBinContent(29,384.4997);
   VbbHcc_tags_H_dR_stack_1->SetBinError(2,65.01191);
   VbbHcc_tags_H_dR_stack_1->SetBinError(3,17234.85);
   VbbHcc_tags_H_dR_stack_1->SetBinError(4,19085.99);
   VbbHcc_tags_H_dR_stack_1->SetBinError(5,28489.7);
   VbbHcc_tags_H_dR_stack_1->SetBinError(6,14932.21);
   VbbHcc_tags_H_dR_stack_1->SetBinError(7,40913.26);
   VbbHcc_tags_H_dR_stack_1->SetBinError(8,19385.41);
   VbbHcc_tags_H_dR_stack_1->SetBinError(9,33213.01);
   VbbHcc_tags_H_dR_stack_1->SetBinError(10,42879.56);
   VbbHcc_tags_H_dR_stack_1->SetBinError(11,29763.57);
   VbbHcc_tags_H_dR_stack_1->SetBinError(12,17014.69);
   VbbHcc_tags_H_dR_stack_1->SetBinError(13,20120.9);
   VbbHcc_tags_H_dR_stack_1->SetBinError(14,66487.19);
   VbbHcc_tags_H_dR_stack_1->SetBinError(15,43923.5);
   VbbHcc_tags_H_dR_stack_1->SetBinError(16,56931.15);
   VbbHcc_tags_H_dR_stack_1->SetBinError(17,47756.15);
   VbbHcc_tags_H_dR_stack_1->SetBinError(18,36043.41);
   VbbHcc_tags_H_dR_stack_1->SetBinError(19,16719.3);
   VbbHcc_tags_H_dR_stack_1->SetBinError(20,25962.74);
   VbbHcc_tags_H_dR_stack_1->SetBinError(21,35250.79);
   VbbHcc_tags_H_dR_stack_1->SetBinError(22,9759.747);
   VbbHcc_tags_H_dR_stack_1->SetBinError(23,9194.759);
   VbbHcc_tags_H_dR_stack_1->SetBinError(24,6875.546);
   VbbHcc_tags_H_dR_stack_1->SetBinError(25,6673.332);
   VbbHcc_tags_H_dR_stack_1->SetBinError(26,5549.486);
   VbbHcc_tags_H_dR_stack_1->SetBinError(27,1634.238);
   VbbHcc_tags_H_dR_stack_1->SetBinError(28,605.3932);
   VbbHcc_tags_H_dR_stack_1->SetBinError(29,366.7729);
   VbbHcc_tags_H_dR_stack_1->SetEntries(261557);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_tags_H_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_1->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_1,"");
   
   TH1D *VbbHcc_tags_H_dR_stack_2 = new TH1D("VbbHcc_tags_H_dR_stack_2","",30,0,6);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(2,34.91494);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(3,36887.89);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(4,65148.2);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(5,76624.4);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(6,82313.85);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(7,79507.13);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(8,74324.9);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(9,72806.16);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(10,76786.69);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(11,85737.89);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(12,98197.91);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(13,113516.9);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(14,130379);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(15,146979.5);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(16,149972.2);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(17,85050.07);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(18,53126.68);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(19,34704.36);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(20,22954.15);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(21,15021.89);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(22,9666.149);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(23,6034.407);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(24,3538.973);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(25,1862.417);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(26,903.7386);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(27,361.1213);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(28,96.47247);
   VbbHcc_tags_H_dR_stack_2->SetBinContent(29,6.493035);
   VbbHcc_tags_H_dR_stack_2->SetBinError(2,3.468814);
   VbbHcc_tags_H_dR_stack_2->SetBinError(3,56.31711);
   VbbHcc_tags_H_dR_stack_2->SetBinError(4,74.26932);
   VbbHcc_tags_H_dR_stack_2->SetBinError(5,80.31423);
   VbbHcc_tags_H_dR_stack_2->SetBinError(6,83.09194);
   VbbHcc_tags_H_dR_stack_2->SetBinError(7,81.89164);
   VbbHcc_tags_H_dR_stack_2->SetBinError(8,79.29697);
   VbbHcc_tags_H_dR_stack_2->SetBinError(9,78.95295);
   VbbHcc_tags_H_dR_stack_2->SetBinError(10,81.53831);
   VbbHcc_tags_H_dR_stack_2->SetBinError(11,85.56313);
   VbbHcc_tags_H_dR_stack_2->SetBinError(12,91.99324);
   VbbHcc_tags_H_dR_stack_2->SetBinError(13,98.52446);
   VbbHcc_tags_H_dR_stack_2->SetBinError(14,105.6016);
   VbbHcc_tags_H_dR_stack_2->SetBinError(15,112.7364);
   VbbHcc_tags_H_dR_stack_2->SetBinError(16,113.8079);
   VbbHcc_tags_H_dR_stack_2->SetBinError(17,85.76011);
   VbbHcc_tags_H_dR_stack_2->SetBinError(18,67.60569);
   VbbHcc_tags_H_dR_stack_2->SetBinError(19,53.94887);
   VbbHcc_tags_H_dR_stack_2->SetBinError(20,44.01968);
   VbbHcc_tags_H_dR_stack_2->SetBinError(21,34.95818);
   VbbHcc_tags_H_dR_stack_2->SetBinError(22,28.59953);
   VbbHcc_tags_H_dR_stack_2->SetBinError(23,22.364);
   VbbHcc_tags_H_dR_stack_2->SetBinError(24,17.0368);
   VbbHcc_tags_H_dR_stack_2->SetBinError(25,11.9022);
   VbbHcc_tags_H_dR_stack_2->SetBinError(26,8.843771);
   VbbHcc_tags_H_dR_stack_2->SetBinError(27,5.339263);
   VbbHcc_tags_H_dR_stack_2->SetBinError(28,2.654147);
   VbbHcc_tags_H_dR_stack_2->SetBinError(29,0.7057921);
   VbbHcc_tags_H_dR_stack_2->SetEntries(2.230134e+07);

   ci = TColor::GetColor("#990099");
   VbbHcc_tags_H_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_H_dR_stack_2->SetLineColor(ci);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_H_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_H_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_tags_H_dR_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   H_dR_tags_18->Modified();
   H_dR_tags_18->cd();
   H_dR_tags_18->SetSelected(H_dR_tags_18);
}
