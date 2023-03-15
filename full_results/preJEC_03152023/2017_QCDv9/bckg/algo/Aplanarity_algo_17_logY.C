#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_algo_17_logY()
{
//=========Macro generated from canvas: Aplanarity_algo_17/Aplanarity_algo_17
//=========  (Thu Mar  9 13:18:02 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_algo_17 = new TCanvas("Aplanarity_algo_17", "Aplanarity_algo_17",0,0,600,600);
   Aplanarity_algo_17->SetHighLightColor(2);
   Aplanarity_algo_17->Range(-0.2183529,-0.4112607,1.171633,6.887217);
   Aplanarity_algo_17->SetFillColor(0);
   Aplanarity_algo_17->SetFillStyle(4000);
   Aplanarity_algo_17->SetBorderMode(0);
   Aplanarity_algo_17->SetBorderSize(2);
   Aplanarity_algo_17->SetLogy();
   Aplanarity_algo_17->SetLeftMargin(0.15709);
   Aplanarity_algo_17->SetRightMargin(0.1234783);
   Aplanarity_algo_17->SetBottomMargin(0.12);
   Aplanarity_algo_17->SetFrameFillStyle(1000);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   Aplanarity_algo_17->SetFrameFillStyle(1000);
   Aplanarity_algo_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(728380.6);
   
   TH1F *st_stack_126 = new TH1F("st_stack_126","",50,0,1);
   st_stack_126->SetMinimum(2.91445);
   st_stack_126->SetMaximum(1436710);
   st_stack_126->SetDirectory(0);
   st_stack_126->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_126->SetLineColor(ci);
   st_stack_126->GetXaxis()->SetTitle("Aplanarity");
   st_stack_126->GetXaxis()->SetRange(1,50);
   st_stack_126->GetXaxis()->SetLabelFont(42);
   st_stack_126->GetXaxis()->SetTitleOffset(1);
   st_stack_126->GetXaxis()->SetTitleFont(42);
   st_stack_126->GetYaxis()->SetTitle("Event/0.02");
   st_stack_126->GetYaxis()->SetLabelFont(42);
   st_stack_126->GetYaxis()->SetTitleSize(0.037);
   st_stack_126->GetYaxis()->SetTitleFont(42);
   st_stack_126->GetZaxis()->SetLabelFont(42);
   st_stack_126->GetZaxis()->SetTitleOffset(1);
   st_stack_126->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_126);
   
   
   TH1D *VbbHcc_algo_Aplanarity_stack_1 = new TH1D("VbbHcc_algo_Aplanarity_stack_1","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(1,584851.4);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(2,306588.2);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(3,123572.8);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(4,66268.92);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(5,62035.34);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(6,26371.24);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(7,11970.5);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(8,6844.304);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(9,7476.338);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(10,3093.949);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(11,3127.432);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(12,4361.382);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(13,507.0024);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(14,335.894);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(15,336.6389);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(16,11550.94);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(17,44.09892);
   VbbHcc_algo_Aplanarity_stack_1->SetBinContent(19,320.0472);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(1,32180.72);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(2,31369.88);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(3,8748.917);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(4,6389.868);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(5,18514.79);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(6,3968.709);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(7,2141.997);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(8,1682.634);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(9,2208.636);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(10,1629.608);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(11,1646.162);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(12,2339.546);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(13,371.2929);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(14,284.9378);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(15,319.4582);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(16,11514.82);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(17,32.00546);
   VbbHcc_algo_Aplanarity_stack_1->SetBinError(19,320.0472);
   VbbHcc_algo_Aplanarity_stack_1->SetEntries(25364);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_algo_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_algo_Aplanarity_stack_2 = new TH1D("VbbHcc_algo_Aplanarity_stack_2","",50,0,1);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(1,19704.51);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(2,14211.4);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(3,9649.552);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(4,6689.664);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(5,4793.57);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(6,3501.063);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(7,2582.466);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(8,1906.03);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(9,1412.987);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(10,1041.529);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(11,765.1441);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(12,563.6948);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(13,399.7501);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(14,271.3484);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(15,185.8683);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(16,120.6936);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(17,75.6719);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(18,46.06016);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(19,28.76837);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(20,12.69784);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(21,6.625611);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(22,2.447421);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(23,0.6381224);
   VbbHcc_algo_Aplanarity_stack_2->SetBinContent(24,0.08646642);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(1,36.99583);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(2,31.88091);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(3,26.4682);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(4,22.1061);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(5,18.79299);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(6,16.09399);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(7,13.87065);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(8,11.91929);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(9,10.28182);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(10,8.863026);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(11,7.584479);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(12,6.535723);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(13,5.50853);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(14,4.525645);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(15,3.761297);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(16,3.045651);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(17,2.406074);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(18,1.877793);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(19,1.500261);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(20,0.9656488);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(21,0.7249555);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(22,0.4268264);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(23,0.2296114);
   VbbHcc_algo_Aplanarity_stack_2->SetBinError(24,0.08646642);
   VbbHcc_algo_Aplanarity_stack_2->SetEntries(1058517);

   ci = TColor::GetColor("#990099");
   VbbHcc_algo_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_algo_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_algo_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_algo_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_algo_Aplanarity_stack_1","QCD","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_algo_17->Modified();
   Aplanarity_algo_17->cd();
   Aplanarity_algo_17->SetSelected(Aplanarity_algo_17);
}
