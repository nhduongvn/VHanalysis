#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_dR_seljet_16_logY()
{
//=========Macro generated from canvas: Z_dR_seljet_16/Z_dR_seljet_16
//=========  (Tue Feb 14 16:07:58 2023) by ROOT version 6.26/06
   TCanvas *Z_dR_seljet_16 = new TCanvas("Z_dR_seljet_16", "Z_dR_seljet_16",0,0,600,600);
   Z_dR_seljet_16->SetHighLightColor(2);
   Z_dR_seljet_16->Range(-1.310117,0.2018018,7.029799,3.977177);
   Z_dR_seljet_16->SetFillColor(0);
   Z_dR_seljet_16->SetFillStyle(4000);
   Z_dR_seljet_16->SetBorderMode(0);
   Z_dR_seljet_16->SetBorderSize(2);
   Z_dR_seljet_16->SetLogy();
   Z_dR_seljet_16->SetLeftMargin(0.15709);
   Z_dR_seljet_16->SetRightMargin(0.1234783);
   Z_dR_seljet_16->SetBottomMargin(0.12);
   Z_dR_seljet_16->SetFrameFillStyle(1000);
   Z_dR_seljet_16->SetFrameBorderMode(0);
   Z_dR_seljet_16->SetFrameFillStyle(1000);
   Z_dR_seljet_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(2677.637);
   
   TH1F *st_stack_273 = new TH1F("st_stack_273","",30,0,6);
   st_stack_273->SetMinimum(4.516965);
   st_stack_273->SetMaximum(3977.764);
   st_stack_273->SetDirectory(0);
   st_stack_273->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_273->SetLineColor(ci);
   st_stack_273->GetXaxis()->SetTitle("#DeltaR(b,b)");
   st_stack_273->GetXaxis()->SetRange(1,30);
   st_stack_273->GetXaxis()->SetLabelFont(42);
   st_stack_273->GetXaxis()->SetTitleOffset(1);
   st_stack_273->GetXaxis()->SetTitleFont(42);
   st_stack_273->GetYaxis()->SetTitle("Events/0.2");
   st_stack_273->GetYaxis()->SetLabelFont(42);
   st_stack_273->GetYaxis()->SetTitleSize(0.037);
   st_stack_273->GetYaxis()->SetTitleFont(42);
   st_stack_273->GetZaxis()->SetLabelFont(42);
   st_stack_273->GetZaxis()->SetTitleOffset(1);
   st_stack_273->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_273);
   
   
   TH1D *VbbHcc_seljet_Z_dR_stack_1 = new TH1D("VbbHcc_seljet_Z_dR_stack_1","",30,0,6);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(2,0.00287347);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(3,4.929625);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(4,8.250346);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(5,9.153181);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(6,10.50167);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(7,11.75517);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(8,12.8232);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(9,14.17318);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(10,14.87831);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(11,15.62717);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(12,16.7751);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(13,18.29298);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(14,19.46198);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(15,21.32315);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(16,19.81295);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(17,9.47552);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(18,5.08374);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(19,3.044744);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(20,1.936209);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(21,1.302532);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(22,0.8582549);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(23,0.5816826);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(24,0.3195261);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(25,0.2114129);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(26,0.1070495);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(27,0.0347853);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(28,0.008394179);
   VbbHcc_seljet_Z_dR_stack_1->SetBinContent(29,0.003163714);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(2,0.00287347);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(3,0.1223882);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(4,0.1575002);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(5,0.1660013);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(6,0.1777135);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(7,0.1881604);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(8,0.1966169);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(9,0.2072815);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(10,0.2117108);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(11,0.2169499);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(12,0.2254804);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(13,0.2359545);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(14,0.2428105);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(15,0.25427);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(16,0.2452119);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(17,0.1687207);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(18,0.1230524);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(19,0.09519346);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(20,0.07560175);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(21,0.06176808);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(22,0.04992582);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(23,0.04112628);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(24,0.03038055);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(25,0.02460423);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(26,0.0175203);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(27,0.01005498);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(28,0.004846601);
   VbbHcc_seljet_Z_dR_stack_1->SetBinError(29,0.003163714);
   VbbHcc_seljet_Z_dR_stack_1->SetEntries(78219);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_Z_dR_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_dR_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_dR_stack_1,"");
   
   TH1D *VbbHcc_seljet_Z_dR_stack_2 = new TH1D("VbbHcc_seljet_Z_dR_stack_2","",30,0,6);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(2,0.0007589197);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(3,1.054319);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(4,1.918029);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(5,2.231115);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(6,2.747629);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(7,3.062929);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(8,3.361656);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(9,3.636208);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(10,3.959281);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(11,4.196002);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(12,4.409732);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(13,4.817139);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(14,5.196814);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(15,5.453222);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(16,5.348314);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(17,2.782338);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(18,1.665678);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(19,1.032442);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(20,0.6583075);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(21,0.4580195);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(22,0.303453);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(23,0.1762229);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(24,0.1153235);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(25,0.04679093);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(26,0.02539305);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(27,0.008668949);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(28,0.003355954);
   VbbHcc_seljet_Z_dR_stack_2->SetBinContent(29,0.0003573031);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(2,0.0005366471);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(3,0.02005211);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(4,0.02708041);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(5,0.02920699);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(6,0.03244852);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(7,0.03423232);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(8,0.03589809);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(9,0.03732089);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(10,0.03894431);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(11,0.04010725);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(12,0.04109859);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(13,0.04295257);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(14,0.04464982);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(15,0.04575006);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(16,0.04531683);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(17,0.03265778);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(18,0.02523762);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(19,0.01980633);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(20,0.01583857);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(21,0.01318666);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(22,0.01071142);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(23,0.008154088);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(24,0.006597743);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(25,0.004193444);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(26,0.003072219);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(27,0.001780477);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(28,0.00111978);
   VbbHcc_seljet_Z_dR_stack_2->SetBinError(29,0.0003573031);
   VbbHcc_seljet_Z_dR_stack_2->SetEntries(155966);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_Z_dR_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Z_dR_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetRange(1,60);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Z_dR_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Z_dR_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Z_dR_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Z_dR_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Z_dR_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_seljet_16->Modified();
   Z_dR_seljet_16->cd();
   Z_dR_seljet_16->SetSelected(Z_dR_seljet_16);
}
