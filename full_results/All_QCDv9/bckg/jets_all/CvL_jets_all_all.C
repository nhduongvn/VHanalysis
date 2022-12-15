void CvL_jets_all_all()
{
//=========Macro generated from canvas: CvL_jets_all_all/CvL_jets_all_all
//=========  (Thu Dec 15 10:05:12 2022) by ROOT version 6.14/09
   TCanvas *CvL_jets_all_all = new TCanvas("CvL_jets_all_all", "CvL_jets_all_all",0,0,600,600);
   CvL_jets_all_all->SetHighLightColor(2);
   CvL_jets_all_all->Range(-0.2183529,-3.360378e+12,1.171633,2.464277e+13);
   CvL_jets_all_all->SetFillColor(0);
   CvL_jets_all_all->SetFillStyle(4000);
   CvL_jets_all_all->SetBorderMode(0);
   CvL_jets_all_all->SetBorderSize(2);
   CvL_jets_all_all->SetLeftMargin(0.15709);
   CvL_jets_all_all->SetRightMargin(0.1234783);
   CvL_jets_all_all->SetBottomMargin(0.12);
   CvL_jets_all_all->SetFrameFillStyle(1000);
   CvL_jets_all_all->SetFrameBorderMode(0);
   CvL_jets_all_all->SetFrameFillStyle(1000);
   CvL_jets_all_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.080234e+13);
   
   TH1F *st_stack_56 = new TH1F("st_stack_56","",20,0,1);
   st_stack_56->SetMinimum(0);
   st_stack_56->SetMaximum(2.184245e+13);
   st_stack_56->SetDirectory(0);
   st_stack_56->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_56->SetLineColor(ci);
   st_stack_56->GetXaxis()->SetTitle("CvL tagging score");
   st_stack_56->GetXaxis()->SetRange(1,20);
   st_stack_56->GetXaxis()->SetLabelFont(42);
   st_stack_56->GetXaxis()->SetLabelSize(0.035);
   st_stack_56->GetXaxis()->SetTitleSize(0.035);
   st_stack_56->GetXaxis()->SetTitleFont(42);
   st_stack_56->GetYaxis()->SetTitle("Events/0.05");
   st_stack_56->GetYaxis()->SetLabelFont(42);
   st_stack_56->GetYaxis()->SetLabelSize(0.035);
   st_stack_56->GetYaxis()->SetTitleSize(0.037);
   st_stack_56->GetYaxis()->SetTitleOffset(0);
   st_stack_56->GetYaxis()->SetTitleFont(42);
   st_stack_56->GetZaxis()->SetLabelFont(42);
   st_stack_56->GetZaxis()->SetLabelSize(0.035);
   st_stack_56->GetZaxis()->SetTitleSize(0.035);
   st_stack_56->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_56);
   
   
   TH1D *VbbHcc_jets_all_CvL_all_stack_1 = new TH1D("VbbHcc_jets_all_CvL_all_stack_1","",20,0,1);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinContent(1,3.165979e+12);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinContent(2,1.38678e+13);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinContent(3,3.232974e+12);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinContent(4,8.023604e+11);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinContent(5,3.5734e+11);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinContent(6,2.069026e+11);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinContent(7,1.282865e+11);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinContent(8,8.797508e+10);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinContent(9,6.755631e+10);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinContent(10,5.428737e+10);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinContent(11,4.431056e+10);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinContent(12,3.714831e+10);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinContent(13,3.295289e+10);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinContent(14,3.045268e+10);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinContent(15,2.962138e+10);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinContent(16,3.033112e+10);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinContent(17,3.25593e+10);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinContent(18,3.906044e+10);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinContent(19,5.127149e+10);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinContent(20,1.270657e+11);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinError(1,2.594451e+08);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinError(2,5.341866e+08);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinError(3,2.563879e+08);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinError(4,1.287382e+08);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinError(5,8.593033e+07);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinError(6,6.56863e+07);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinError(7,5.178273e+07);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinError(8,4.294857e+07);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinError(9,3.755596e+07);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinError(10,3.370341e+07);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinError(11,3.054161e+07);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinError(12,2.810673e+07);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinError(13,2.639603e+07);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinError(14,2.54191e+07);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinError(15,2.499648e+07);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinError(16,2.535978e+07);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinError(17,2.626094e+07);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinError(18,2.877384e+07);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinError(19,3.283679e+07);
   VbbHcc_jets_all_CvL_all_stack_1->SetBinError(20,5.245146e+07);
   VbbHcc_jets_all_CvL_all_stack_1->SetEntries(5.141745e+09);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_jets_all_CvL_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvL_all_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_CvL_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvL_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_all_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_CvL_all_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_CvL_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_all_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_CvL_all_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_CvL_all_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_all_CvL_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_all_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_CvL_all_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_CvL_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvL_all_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CvL_all_stack_2 = new TH1D("VbbHcc_jets_all_CvL_all_stack_2","",20,0,1);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinContent(1,1.352201e+08);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinContent(2,4.282491e+08);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinContent(3,1.202457e+08);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinContent(4,3.992647e+07);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinContent(5,2.226317e+07);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinContent(6,1.546675e+07);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinContent(7,1.174055e+07);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinContent(8,9674216);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinContent(9,8724866);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinContent(10,8288419);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinContent(11,8121445);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinContent(12,8158302);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinContent(13,8662640);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinContent(14,9452477);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinContent(15,1.074326e+07);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinContent(16,1.274666e+07);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinContent(17,1.554806e+07);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinContent(18,2.043186e+07);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinContent(19,2.815005e+07);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinContent(20,5.893013e+07);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinError(1,3257.904);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinError(2,5717.441);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinError(3,3032.529);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinError(4,1764.842);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinError(5,1317.503);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinError(6,1098.822);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinError(7,959.3366);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinError(8,870.3155);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinError(9,826.3983);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinError(10,805.9323);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinError(11,797.0224);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinError(12,798.4135);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinError(13,823.3982);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinError(14,859.79);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinError(15,916.0443);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinError(16,998.1611);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinError(17,1102.633);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinError(18,1264.652);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinError(19,1487.886);
   VbbHcc_jets_all_CvL_all_stack_2->SetBinError(20,2170.966);
   VbbHcc_jets_all_CvL_all_stack_2->SetEntries(1.519822e+10);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_jets_all_CvL_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CvL_all_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_CvL_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CvL_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_all_stack_2->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_CvL_all_stack_2->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_CvL_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_all_stack_2->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_CvL_all_stack_2->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_CvL_all_stack_2->GetYaxis()->SetTitleOffset(0);
   VbbHcc_jets_all_CvL_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CvL_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CvL_all_stack_2->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_jets_all_CvL_all_stack_2->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_jets_all_CvL_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CvL_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.62,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CvL_all_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#00cc00");
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
   entry=leg->AddEntry("VbbHcc_jets_all_CvL_all_stack_1","QCD","F");

   ci = TColor::GetColor("#cc0000");
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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CvL_jets_all_all->Modified();
   CvL_jets_all_all->cd();
   CvL_jets_all_all->SetSelected(CvL_jets_all_all);
}
